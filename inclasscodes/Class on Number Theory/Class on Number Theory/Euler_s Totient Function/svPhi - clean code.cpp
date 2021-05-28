//SIVE OF EULER TOTIENT FUNCTION
#include <iostream>
using namespace std;
int p[1000001];
int mark[1000001];
void svPhi(){
    int n=1000000;
    mark[1]=1;
    for(int i=1; i<=n; i++) p[i] = i;
    for(int i=2; i<=n; i++){
        if(!mark[i]){
            for(int j=i; j<=n; j += i){
                mark[j]=1;
                p[j] = p[j]/i*(i-1);
            }
        }
    }
}
int main(){
    svPhi();
    int n;
    while(cin>>n){
        cout<<"phi of "<<n<<": "<<p[n]<<"\n";
    }
}
