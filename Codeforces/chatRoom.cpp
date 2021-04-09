//https://codeforces.com/problemset/problem/58/A
#include <bits/stdc++.h>
using namespace std;

int main (){
    
    string s;
    cin>>s;
    
    string helo = "hello";
    int idx = 0;
    int ban = 0; 
    for(int i = 0; i < s.size(); i++){
        if(s[i] == helo[idx]){
            idx++;
            if(idx == 5){ban = 1; break;}
        }
    }
    
    if(ban)cout<<"YES\n"; else cout<<"NO\n";
    
    return 0;
}
