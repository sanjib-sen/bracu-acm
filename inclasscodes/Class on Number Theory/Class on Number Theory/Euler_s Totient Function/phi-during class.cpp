#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
using namespace std;
vector<long long int> p;
bool f[1000009];
void sv(){
    long long int n = 1000000;
    long long int sqrtN = sqrt(n*1.)+2;
    p.push_back(2);
    for(long long int i=4; i<=n; i += 2) f[i] = 1;
    for(long long int i=3; i<=sqrtN; i+=2){
        if(f[i]==0){
            for(long long int j=i*i; j<=n; j+=i) f[j] = 1;
        }
    }
    for(long long int i=3; i<=n; i+=2){
        if(f[i]==0) p.push_back(i);
    }
}
int ph[1000000];
int phi(int n){
    //long long int n = 1000000;
    //long long int sqrtN = sqrt(n*1.)+2;
    int ret = n;
    for(int i=0; i*i <= n && i< p.size(); i++ ){
        if(n%p[i]==0){
            while(n%p[i] == 0){
                n /= p[i];
            }
            //ret = ret * (1-1/pi)
            //ret = ret * (pi-1)/pi ;
            //n = n - n/p;
            ret = ret - ret/p[i];
        }
    }
    if(n>1){
        //n is a prime
        //ret = ret * (1 - 1/pk)
        ret = ret - ret/n;
    }
    return ret;
}
int main(){
    sv();
    int n;
    while(true){
        cin>>n;
        cout<<phi(n)<<endl;
    }
}
