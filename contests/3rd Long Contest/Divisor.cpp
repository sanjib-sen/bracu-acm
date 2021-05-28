#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int divisor(int le){
    int div=0;
    int les=sqrt(le)+1;
    for (int i=1;i<les;i+=1){
        if (le%i==0){
            if(le/i==i){
                div++;
            }
            else{
                div+=2;
            }
        }
    }
    return div;
}
bool comp(pair<int,int>a, pair <int,int>b ){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}
vector <pair<int,int>> v;
int inp,t;
int main(){
    for (int i=1;i<=1000;i++){
        v.push_back(make_pair(divisor(i),i));
    }
    sort(v.begin(),v.end(),comp);
    cin>>t;
    for(int i=1;i<=t;i++){
    cin>>inp;
    cout<<"Case "<<i<<": "<<v[inp-1].second<<"\n";
    }
    return 0;
}
