#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll box,n,m,r,c,s;
map<ll,ll> mpr;
map<ll,ll> mpc;
int main(){
    cin>>s>>n;
    box=s*s;
    for (ll i=0;i<n;i++){
        cin>>r>>c;
        if(mpr[r]==0 ){
            mpr[r]=1;
        }
        if (mpc[c]==0){
            mpc[c]=1;
        }
        ll remr=s-(mpr.size());
        ll remc=s-(mpc.size());
        cout<<remr*remc<<"\n";

    }
    return 0;
}
