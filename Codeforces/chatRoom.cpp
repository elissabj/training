//https://codeforces.com/problemset/problem/58/A
#include<bits/stdc++.h>
using namespace std;

int main(){

     string s; cin >> s;

    bool yaEncontre = false;
    string check = "hello";
    int cont = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == check[cont]){
            if (s[i] == 'o'){ yaEncontre = true; break;}
            cont++;
        }
    }

    if(yaEncontre){
        cout <<"YES\n";
    }else{
        cout <<"NO\n";
    }
return 0;
}
