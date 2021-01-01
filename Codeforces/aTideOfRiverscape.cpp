//https://codeforces.com/problemset/problem/989/B
#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n, p;
    cin>>n>>p;
    string s;
    cin>>s;
    
    int all_i = n-p;
    int ban = 0;
    for(int i = 0; i < n-p; i++){
        if(s[i] == '.'){
            ban = 1;
            s[i] = (s[i+p] == '1') ? '0' : '1';
        } else if (s[i+p] == '.') {
            ban = 1;
            s[i+p] = (s[i] == '1') ? '0' : '1';
        } else if (s[i] != s[i+p] && s[i] != '.' && s[i+p] != '.'){
            ban = 1;
        }
    }
    
    if(ban){
        for(int i = 0; i < n; i++){
            if(s[i] == '.')s[i] = '0';
        }
        cout << s <<"\n";
    } else {
        cout << "No\n";
    }
    
    
    return 0;
}



