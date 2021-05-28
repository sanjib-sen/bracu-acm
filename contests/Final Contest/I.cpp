#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
int a,b,c;
ll d,e,f;
int main(){
    cin>>c;
    for(int i=1;i<=c;i++){
        cin>>a>>b;
        e=pow(a,b);
        d=e%1000000007;
        cout<<"Case "<<i<<": "<<d<<"\n";
    }
return 0;
}
