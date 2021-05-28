#include <bits/stdc++.h>
#define ll long long int
using namespace std;
map <char,int> s1;
map<char,int> s2;
string a,b;
int main(){
    getline(cin,a);
    getline(cin,b);

    for(int i=0;i<a.size();i++){
            if(a[i]==' '){
                continue;
            }
            else{
                s1[a[i]]+=1;
            }
    }

    for(int i=0;i<b.size();i++){
            if(b[i]==' '){
                continue;
            }
            else if(s1[b[i]]!=0){
                s1[b[i]]-=1;
            }
            else{
                cout<<"NO\n";
                return 0;
            }
    }
    cout<<"YES\n";
    return 0;
}
