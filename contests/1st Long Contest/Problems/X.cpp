#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll b,sum=0,mi=100000000000,a;
int main(){
    cin>>b;
    ll ar[b];
    while(b--){
        cin>>a;
        if (a%2!=0){
            if(mi>a){
                mi=a;
            }
        }
        sum+=a;
    }
    if(sum%2!=0){
        sum-=mi;
    }
    cout<<sum/2<<"\n";
    return 0;
}
