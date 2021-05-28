#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> v;
int t, q, inp, count;
int p = 1;
int main()
{
    
    while (cin>>t>>q && t!=0 && q!=0)
    {
        for (int i =0; i<t; i++){
            cin>>inp;
            v.push_back(inp);
        }

        sort(v.begin(), v.end());
        map <int, int> ar;

        for (int i = 1;i <= t; i++){
            inp = v[i-1];
            
            if(ar[inp] != 0){
                continue;
            }
            else{
                ar[inp] = i;
            }
        }


        v.clear();


        for (int i = 0;i<q;i++){
            cin>>inp;
            v.push_back(inp);
        }

        cout << "CASE# " << p++ << ":\n";

        for (int i = 0; i<q; i++){
            inp = v[i];
            if (ar[inp]!=0){
                cout<<inp<<" found at "<<ar[inp]<<"\n";
            }
            else{
                cout<<inp<<" not found"<<"\n";
            }
        }
        v.clear();

    }
}