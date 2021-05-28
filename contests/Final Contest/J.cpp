#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
ll a,b,c=0;
int main(){
    cin>>a,b;
    ll low=1;
    ll hi=a;

    while(hi-low>=1){
        ll mid=hi/2;
        if (mid<=b){
            low=mid;
            c++;
            if (mid==b){
                break;
            }
        }
        else{
            hi=mid;
            c++;
        }
    }
    cout<<c<<"\n";
return 0;
}
