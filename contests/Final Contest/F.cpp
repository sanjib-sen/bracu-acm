#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
ll a,sum;
string b;
map<string,ll> mp;
int main(){
    cin>>a;
    while (a--){
        cin>>b;
        if (mp[b]==0){
            mp[b]=1;
        }
        else if (mp[b]==5){
            continue;
        }
        else{
            mp[b]++;
        }
    }
    for (auto x:mp){
        sum+=20+((x.second-1)*5);
    }
    cout<<sum<<"\n";
    return 0;
}
