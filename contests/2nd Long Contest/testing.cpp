#import <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ll n,k;
    vector <ll> v;
    cin>>n>>k;
    for(ll i=1;i<sqrt(n)+1;i++){
        if (n%i==0){
            v.push_back(i);
            if(n/i!=i){
                v.pb(n/i);
            }
        }
    }
    if (v.size()<k){
        cout<<-1<<"\n";
    }
    else{
        sort(v.begin(),v.end());
        cout<<v[k+1]<<endl;
    }
    return 0;
}
