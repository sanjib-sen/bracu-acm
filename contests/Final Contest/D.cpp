#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
int a,b,c,d;
int main(){
    cin>>a;
    vector<int> ar;
    for (int i=0;i<a;i++){
        cin>>d;
        ar.push_back(d);
    }

    cin>>b;
    for (int i=0;i<b;i++){
        cin>>c;
        int arr[c];
        for (int j=0;j<c;j++){
            arr[j]=ar[j];
        }
        sort (arr,arr+c);
        cout<<arr[c-1]<<" ";
        int arr2[a-c];
        for (int j=0;j<a-c;j++){
            arr2[j]=ar[c+j];
        }
        sort (arr2,arr2+(a-c));
        cout<<arr2[0]<<"\n";
    }
return 0;
}
