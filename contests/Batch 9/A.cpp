#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> v;
int t, q, inp;
int p = 1;
int main()
{
    
    while (cin>>t>>q && t!=0 && q!=0)
    {
        
        for (int i = 0; i < t; i++)
        {
            cin >> inp;
            v.push_back(inp);
        }
        sort(v.begin(),v.end());
        
        for (int j = 0; j < q; j++)
        {
            cin >> inp;
            if(j==0){
                cout << "Case# " << p++ << ": \n";
            }
            if(binary_search(v.begin(),v.end(),inp)){
            int pos = lower_bound(v.begin(), v.end(), inp) - v.begin();
            cout << inp << " found at " << pos+1 << "\n";
            }
            else{
                cout<<inp<<" not found\n";
            }
        }
        v.clear();
    }
}
