#import <bits/stdc++.h>
using namespace std;
#define ll long long int
int p,e,ip=0,ie=0;
string sp,se;
queue<string> mpp;
queue<string> mpe;
map<string,int> mp;
int main(){
    cin>>p>>e;
    while (p--){
        cin>>sp;
        mpp.push(sp);
        }
    while (e--){
        cin>>se;
        mpe.push(se);
    }
    int i=1;
    while(mpp.empty()==false && mpe.empty()==false ){
        if (i%2==1 ){
            if (mp[mpp.front()]!=0){
                mpp.pop();
                if (mpp.)
            }
            mpp.pop();
            mp[mpp.front()]=1;
        }
        else{
            if (mp[mpe.front()]!=0){
                mpe.pop();
                i++;
                continue;
            }
            mpe.pop();
            mp[mpe.front()]=1;
        }
        i++;
    }
    if (mpp.empty()==true){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    return 0;
}
