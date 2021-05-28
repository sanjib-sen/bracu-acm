#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v;
vector<ll> v2;
ll n, q, inp, p = 0, t;
int main()
{
    cin >> n >> q;
    ;
    while (n--)
    {
        cin >> inp;
        v.push_back(inp);
    }
    for (ll i = 0; i < v.size(); i++)
    {
        t = 0;
        for (ll j = i + 2; j < v.size(); j++)
        {
            t = 0;
            if (v[j] - v[i] > q)
            {
                t++;
                cout<< v[j]<<" "<<v[i]<<endl;
                continue;
            }
            else
            {
                t++;
                p++;
            }
        }
    }
    cout << p+t << endl;
}