#include <bits/stdc++.h>
using namespace std;
int t;
string str;
bool chk(string str){
    stack <char> mp;
        for(auto c:str){
            if (c=='{' || c=='[' || c=='(' ){
                    mp.push(c);
                }
            else if(c=='}' && mp.top()=='{'){
                    mp.pop();
                    continue;
                }
            else if(c==']' && mp.top()=='['){
                    mp.pop();
                    continue;
                }
            else if(c==')' && mp.top()=='('){
                    mp.pop();
                    continue;
                }
            else{
                return false;
            }
        }
        return false;
}
int main(){
    stack <char> mp;
    cin>>t;

    for (int i=0;i<t;i++){
        cin>>str;
        if(chk(str)==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}
