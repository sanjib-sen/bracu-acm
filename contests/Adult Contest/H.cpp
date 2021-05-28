#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
string str="";
vector <int> v;
int main(){
    cin>>n;
    for (int i=n;i>0;i--){
        if(i==1){
            str+=to_string(i);
            break;
        }
    }
    cout<<str<<endl;
    int p=n;
    for (int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
        sort(v.rbegin(),v.rend());
        string tmpstr="";
        for(int j=0;j<v.size();j++){
            if (j==v.size()-1){
                tmpstr+=to_string(v[j]);
                break;
            }
            tmpstr+=to_string(v[j])+" ";
        }
        cout<<str.substr(i,i*2+1)<<endl;
        if(str==tmpstr){
            cout<<tmpstr<<endl;
        }
        else if (tmpstr==str.substr(i,i*2+1)){
            cout<<tmpstr<<"\n";

        }
        else{
            cout<<"\n";
        }
    }

    return 0;
}
