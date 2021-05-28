#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
using namespace std;
bool f[1000009];
int phi[1000001];
int n = 1000000;
void svPhi(){
    //We know,
    //phi(n) = n * (1-1/P1)*(1-1/P2)*(1-1/P3)*....*(1-1/Pk);
    //let's initialize phi(n) =  n;
    for(int i=1; i<=n; i++){
        phi[i] = i;
    }
    f[1] = 1;
    //
    for(int i=2; i<=n; i++){
        if(f[i]==0){
            // i is prime
            for(int j=i; j<=n; j+=i) {
                f[j] = 1;
                //phi(j) = phi(j) * (1 - 1/Pi);
                //phi[j] = phi[j] * (1-1/i);
                // (1 - 1/i) is equals to (i-1)/i
                // So, we can write phi[j] = phi[j] * (i-1) / i
                phi[j] = phi[j] / i * (i-1);
            }
        }
    }
}
int main(){
    svPhi();
    cout<< "phi of 12: "<< phi[12]<<'\n';
}
