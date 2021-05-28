#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector <ll> v;
vector <ll> v;
ll n, q, inp, p;
int main(){
    cin>>n>>q;
    for (ll i=0;i<n;i++){
        cin>>inp;
        if(i<2){
            v.push_back(inp);
        }
        else{
            v.push_back(inp);
            if((v[i]-v[i-2])<=q){
                p++;
            }
        }
    }
    cout<<p<<endl;
}