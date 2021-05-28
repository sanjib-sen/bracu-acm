#include <bits/stdc++.h>
using namespace std;
bool f[1000009];
int phi(int n){
    int ret = n;
    //We'll loop through the prime numbers up to sqrt(n)
    //For the prime numbers we don't actually need to generate the prime numbers separately
    //When we find a prime divisor, we divide keep dividing n by it as long as it divides n;
    //So, the next divisor we'll get is another prime number
    for(int i=2; i*i <= n; i++){
        if(n%i==0){
            while(n%i == 0){
                n /= i;
            }
            ret = ret - ret/i;
        }
    }
    if(n>1){
        ret = ret - ret/n;
    }
    return ret;
}
int main(){
    int n;
    while(true){
        cin>>n;
        cout<<phi(n)<<endl;
    }
}
