#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n;
string s,first="",last="",actual="";
string hello(string past){
    string frac="";
    for(int i=past.size()-1;i>=0;i--){
        frac+=past[i];
    }
    return frac;
}
int main(){
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(i%2==0){
            first+=s[i];
        }
        else{
            last+=s[i];
        }
    }
    if(n%2==0){
        actual=hello(first)+last;
    }
    else{
        actual=hello(last)+first;
    }
    cout<<actual<<"\n";;
    return 0;
}
