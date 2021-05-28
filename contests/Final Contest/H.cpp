#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
int a,b,c,d,s=0;
int main(){
    cin>>a;
    int ar[a];
    for (int i=0;i<a;i++){
        cin>>d;
        ar[i]=d+s;
        s=ar[i];
    }
    cin>>b;
    for (int i=1;i<=b;i++){
        cin>>c;
        if (a==1){
            cout<<"Case "<<i<<": "<<"Yes\n";
        }
        else if (c==1 || c== a || a==2){
            cout<<"Case "<<i<<": "<<"No\n";
        }
        else if(ar[c-2]==ar[a-1]-ar[c-1]){
            cout<<"Case "<<i<<": "<<"rYes\n";
        }
        else{
            cout<<"Case "<<i<<": "<<"No\n";
        }
    }
    return 0;
}
