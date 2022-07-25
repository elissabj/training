// https://codeforces.com/problemset/problem/1632/A
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    int t; cin >> t; 
    while(t--){
        
        int n; cin >> n; 
        string v; cin >> v; 
        
        if(n == 2){
            if(v[0] == v[1]){
                cout << "NO\n";
            }else{
                cout <<"YES\n";
            }
        }else if(n > 2){
            cout << "NO\n";
        }else{
            cout <<"YES\n";
        }
 
    }
 
 
return 0;
}