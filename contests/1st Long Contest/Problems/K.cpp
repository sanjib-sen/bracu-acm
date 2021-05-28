#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int j;
string first,last,full;
vector<string> rat;
vector<string> child;
vector<string> men;
vector<string> cap;
int main(){
    cin>>j;
    while(j--){
        cin>>first>>last;
        if(last=="rat"){
            rat.push_back(first);
        }
        else if(last=="child" || last=="woman"){
            child.push_back(first);
        }
        else if(last=="man"){
            men.push_back(first);
        }
        else{
            cap.push_back(first);
        }
    }
    for(int i=0;i<rat.size();i++){
        cout<<rat[i]<<"\n";
    }
    for(int i=0;i<child.size();i++){
        cout<<child[i]<<"\n";
    }
    for(int i=0;i<men.size();i++){
        cout<<men[i]<<"\n";
    }
    for(int i=0;i<cap.size();i++){
        cout<<cap[i]<<"\n";
    }
    return 0;
}
