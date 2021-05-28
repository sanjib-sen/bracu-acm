#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll m,n,k;
int c;
vector <int> v;
int main(){
    cin>>m;
    k=m;
    for(int j=1;j<=m;j++){
        cin>>n;
        if(n!=k){
            if(c==1){
                cout<<"\n";
                c=2;
            }
            cout<<"\n";
            v.push_back(n);
            sort(v.rbegin(),v.rend());
        }
        else{
            cout<<n<<" ";
            sort(v.rbegin(),v.rend());
            bool bah=true;
            for (int s=n-1,i=0;i<v.size();i++,s--){
                if(s!=v[i]){
                    bah=false;
                    break;
                }
            }
            if(bah==true){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            k=v[v.size()-1]-1;
            v.clear();
            c=1;
            }
        }
    }
}
