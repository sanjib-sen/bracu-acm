#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t,n;

int main(){
    while(cin>>t && t!=0){
            priority_queue<ll> ar;
        for (ll i=0;i<t;i++){
            cin>>n;
            ar.push(n*-1);
        }
        ll s=0;
        while (ar.empty()==false){
            ll artop=(ar.top()*-1);
            ar.pop();
            ll arsecond=(ar.top()*-1);
            ar.pop();
            s+=artop+arsecond;
            if (ar.empty()==true){
                break;
            }
            ar.push((artop+arsecond)*-1);
        }
        cout<<s<<endl;
    }
    return 0;
}
