#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string s,a;
ll b,c=0;
string solve(string s){
    b=0;
    for(int i=0;i<s.size();i++){
        b+=((ll)s[i])-48;
    }
    c++;
    return to_string(b);
}
int main(){
    cin>>a;
    while(a.size()!=1){
        a=solve(a);
    }
    cout<<c<<"\n";
    return 0;
}
