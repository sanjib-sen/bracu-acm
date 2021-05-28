#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,a=0,b=0;
string m, p, q;
int main(){
    cin>>n>>m;
    n--;
    a++;
    while(n--){
        cin>>q;
        if(q==m){
            a++;
        }
        else{
            p=q;
            b++;
        }
    }
    if(a>b){
        cout<<m<<"\n";
    }
    else{
        cout<<p<<"\n";
    }
    return 0;
}

