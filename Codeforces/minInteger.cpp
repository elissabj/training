//https://codeforces.com/contest/1251/problem/C
#include<bits/stdc++.h>
using namespace std;


void solve (string &s){

    vector<int>p;
    vector<int>ip;
    int i = 0, j = 0, ct = 0;
    for(; i < s.size(); i++){
        int v = s[i]-'0';
        if( v % 2 != 0) p.push_back(v);
        else ip.push_back(v);
    }

    i = 0;
    while(ct < s.size()){
        if(i == p.size()){
            for(;j < ip.size();j++) cout <<ip[j];
            break;
        }else if (j == ip.size()){
            for(;i < p.size();i++) cout <<p[i];
            break;
        }else{
            if(p[i] < ip[j]){ cout<<p[i]; i++;
            }else{ cout<<ip[j]; j++;
            }
        }
        ct++;
    }

    cout<<"\n";
}


int main(){

    int t; cin >> t; 
    while(t--){
        string s; cin >> s; 
        solve(s);
    }

return 0;
}