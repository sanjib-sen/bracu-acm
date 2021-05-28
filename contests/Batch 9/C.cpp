#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, q, inp;
int main(){
    cin>>n;
    vector<int> ar;
    for(int i = 0;i<n;i++){
        cin>>inp;
        ar.push_back(inp);
    }
    sort(ar.begin(), ar.end());
    cin>>q;
    while(q--){
        cin>>inp;
        int pos1 = lower_bound(ar.begin(),ar.end(), inp) - ar.begin();
        if (pos1 == 0){
            cout<<"X ";
        }
        else{
            cout<<ar[pos1-1]<<" ";
        }
        int pos2 = upper_bound(ar.begin(), ar.end(), inp) -ar.begin();
        if(pos2>=ar.size()){
            cout<<"X\n";
        }
        else{
        cout<<ar[pos2]<<"\n";
        }
    }
}