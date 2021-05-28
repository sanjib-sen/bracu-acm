#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,a,b=0,c=0,ln,lm;
int main(){
    cin>>n>>m>>a;
    if(n%a==0){
        b-=1;
        }
    if(m%a==0){
        c-=1;
        }
    ln=(n/a)+1+b;
    lm=(m/a)+1+c;
    cout<<ln*lm<<endl;
    return 0;
}
