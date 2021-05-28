#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll j,k;
int main(){
    cin>>j;
    while (j--){
        cin>>k;
        if (k%4==0){
            ll suma=0,sumb=0;
            cout<<"YES\n";
            for(ll i=2;i<=k;i+=2){
                cout<<i<<" ";
                suma+=i;
            }
            for (ll i=1;i<=k-3;i+=2){
                cout<<i<<" ";
                sumb+=i;
            }
            cout<<suma-sumb<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
