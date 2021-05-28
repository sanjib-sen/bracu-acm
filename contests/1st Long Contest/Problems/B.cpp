#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n,m=0,i,a,b,c;
int main(){
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if (a+b+c>=2){
            m++;
        }
    }
    cout<<m<<"\n";
    return 0;
}
