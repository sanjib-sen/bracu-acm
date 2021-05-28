#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
ull a,b,c,d,e,f,g,h;
int main(){
    cin>>a;
    for (ull i=0;i<a;i++){
        cin>>b>>c>>d;
        g=(d-1)/c;
        if (d-1%c!=0){
            f=1;
        }
        if(d-1==2 || d-1==1){
            g=1,f=1;
        }
        cout<<g+f<<" ";
        e=b/c;
        if (e<d){
            cout<<e<<"\n";
        }
        else{
            cout<<d<<"\n";
        }
    }
return 0;
}
