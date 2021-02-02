//https://codeforces.com/contest/855/problem/A
#include<bits/stdc++.h>
using namespace std; 

int main(){

    set<string> dict;

    int n; cin >> n;

    while(n--){
        string cad; cin >> cad; 
        if (dict.count(cad)){
            cout<<"YES\n";
        }else{
            dict.insert(cad);
            cout<<"NO\n";
        }
    }
return 0;
}