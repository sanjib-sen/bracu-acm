#include<bits/stdc++.h>
using namespace std;
#define N 100000001
/*
    Do keep this in mind while using bitset is that the size of the bitset has to be given during
    compilation time. That means you have to have a fixed bitset size and you can't change the size
    of it later on in your code. Which is not the case with vector<bool>
*/
bitset<N> marker;
//vector<bool> marker(N);
void sieve() {      //false = prime, true = not prime
    for(int i=4; i<N; i+=2) {
        marker[i] = true;
    }
    /*
       * The reason why we can start the inner loop from i*i is because -
       * lets say i = 7.. so our inner loop j will start from i*i which means 49.
       * So you could say why didn't we start from 7*2. So the reason is,
       * 7*2 = 14 which was already handled when the value of i was 2
       * 7*3 = 21 which was already handled when the value of i was 3
       * 7*4 = 28 which was already handled when the value of i was 2 since 4 is a multiple of 2.
       * ... so on.
    */
    for(int i=3; i*i<N; i+=2) { //2,3,4,5,6
        if(!marker[i]) {
            for(int j = i*i; j<N; j+=i) {
                marker[j] = 1;
            }
        }
    }
}
int main() {
    sieve();
    for(int i=2; i<100; i++) {
        if(marker[i]) {
            cout << "i = " << i << " is not a prime\n";
        } else {
            cout << "i = " << i << " is prime\n";
        }
    }
}
