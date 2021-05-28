#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m,a,b,c;
int main(){
    cin>>n>>m;
    char c[m];
    c[0]=char(97);
    for(int i=1,j=98;i<m;i++,j++){
        c[i]=char(j);
    }
    for(int i=0,j=0;i<n;i++,j++){
        if(j==m){
            j=0;
        }
        cout<<c[j];
    }
    cout<<"\n";
    return 0;
}
