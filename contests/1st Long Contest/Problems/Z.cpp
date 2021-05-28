#include <bits/stdc++.h>
using namespace std;
#define ll long long int
priority_queue<ll> pq;
ll n,m,p,d,e,h,c;
int main(){
    cin>>n;
    while(n--){
        cin>>m;
        while (m--){
            cin>>p;
            pq.push(p);
        }
        d=111111;
        e=0;
        h=0;
        c=0;
        while(pq.empty()==false){
            e=fabs(pq.top()-h);
            if(c!=0 && e<d){
                d=e;
            }
            h=pq.top();
            pq.pop();
            c=2;
        }
        cout<<d<<"\n";
    }
}
