#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
string str="";
vector <int> v;
int main(){
    cin>>n;
    for (int i=0;i<n;i++){
        if(i==n-1){
            str+=i;
            break;
        }
        str+=i+" ";
    }
    int p=n;
    for (int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }

    return 0;
}