#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, m;
string w;
vector <string> words;
vector <string> lines;
vector <string> act;
vector <string> sct;
string ans(string wor){
    act.clear();
    for(int i=0;i<words.size();i++){
    int leng=wor.size();
    string ban=words[i];
    if (wor==ban){
        continue;
    }
        for(int j=0;j<wor.size();j++){
            if(wor[wor.size()-j-1]==ban[ban.size()-j-1]){
            leng-=1;
            }
            else{
                act.push_back(to_string(leng)+ban);
                break;
            }
        }
    }
    sort(act.begin(),act.end());
    return act[0].substr(1,act[0].size()-1);
}

int main(){
    while(getline(cin,w)){
        if (w.empty()){
            break;
        }
        words.push_back(w);
    }
    while(getline(cin,w)){
        if (w.empty()){
            break;
        }
        lines.push_back(w);
    }
    for(int i=0;i<lines.size();i++){
        string wr=ans(lines[i]);
        cout<<wr<<"\n";
    }
}
