#include <bits/stdc++.h>
using namespace std;
int t,n;

int main(){
    map<int,int> m;
    vector <pair<int,int>> v;
    vector <int> v1;
    while(cin>>t){
        if (m.count(t)==0){
            m[t]=1;
            v1.push_back(t);
        }
        else{
            m[t]+=1;
        }
    }

    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<" "<<m[v1[i]]<<endl;
    }

    return 0;
}
