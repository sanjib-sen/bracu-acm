#include <bits/stdc++.h>
using namespace std;
string s;
map<string,int> mp;
queue<string> p;
queue <string> e;
int m,n,j=0,k=0,chk=0;

    void pol(){
        if (p.empty()==false){
            while(mp[p.front()]!=0){
                p.pop();
                if (p.empty()==true){
                    cout<<"NO\n";
                    return;
                }
            }
            mp[p.front()]==1;
            void enemy();
            return;
        }
    }

        void enemy(){
        if (e.empty()==false){
            while(mp[e.front()]!=0){
                e.pop();
                if (e.empty()==true){
                    cout<<"YES\n";
                    return;
                }
            }
            mp[e.front()]==1;
            void pol();
            return;
        }
    }


int main(){
    cin>>m>>n;
    while (m--){
        cin>>s;
        p.push(s);
    }
    while (n--){
        cin>>s;
        e.push(s);
    }
    pol();
    return 0;
}


