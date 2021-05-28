#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
int a; string b;
int main(){
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        char c[b.length()+1];
        for (int k=0;k<b.length();k++){
            c[k]=b.at(k);
        }
        c[b.length()+1]='1';
        sort(c,c+b.length());
        for (int j=0;j<b.length();j+=2){
            if (c[j]!=c[j+1]){
                cout<<"Case "<<i+1<<": "<<c[j]<<"\n";
                break;
            }
            }
    }
return 0;
}
