#import <bits/stdc++.h>
using namespace std;
#define ll long long int
int p,e,ip=0,ie=0;
string sp,se;
map<string,int> mpp;
int main(){
    cin>>p>>e;
    for (int i=1;i<=p;i++){
        cin>>sp;
        if(mpp.count(sp)==0){
            mpp[sp]=1;
            ip++;
        }
    }
    for (int i=1;i<=e;i++){
        cin>>se;
        if(mpp.count(se)==0){
            mpp[se]=1;
            ie++;
        }
    }
    if(ip>ie){
        cout<<"YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
