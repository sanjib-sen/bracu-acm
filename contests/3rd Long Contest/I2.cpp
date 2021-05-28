#include <bits/stdc++.h>
using namespace std;
int t,n;

int main(){

    while(cin>>t && t!=0){
            priority_queue<int> ar;
        for (int i=0;i<t;i++){
            cin>>n;
            ar.push(n*-1);
        }
        int nar=(ar.top()*-1);
        ar.pop();
        nar+=(ar.top()*-1);
        ar.pop();
        int s=nar;
        for (int i=1;i<t-1;i++){
            nar=(ar.top()*-1)+nar;
            ar.pop();
            s+=nar;
        }
        cout<<s<<endl;
    }
    return 0;
}
