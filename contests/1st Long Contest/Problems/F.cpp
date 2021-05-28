#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n,m,s=0,i,a,b,c;
int main(){
    cin>>n>>m;
    i=n;
    while(i--){
        cin>>a;
        if(a>m){
            s++;
        }
    }
    cout<<(s*2)+(n-s)<<"\n";
    return 0;
}
