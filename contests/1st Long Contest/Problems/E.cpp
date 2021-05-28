#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m=0,i,a,b,c;
string s;
int main(){
    cin>>n;
    while(n--){
        cin>>s;
        if (s=="X++" || s=="++X"){
            m++;
        }
        else{
            m--;
        }
    }
    cout<<m<<"\n";
    return 0;
}

