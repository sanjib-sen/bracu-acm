#include <bits/stdc++.h>
using namespace std;
int t;

int main(){
while(cin>>t && t!=0){
    queue <int> q;
    for (int i=1;i<=t;i++){
        q.push(i);
    }
    cout<<"Discarded cards:";
    while(q.size()!=1){
        string spa=",";
        if(q.size()==2){
        spa="";
        }
        cout<<" "<<q.front()<<spa;
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout<<"\nRemaining card: "<<q.front()<<"\n";

}
}
