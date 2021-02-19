//https://codeforces.com/problemset/problem/1095/A
#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n; cin >> n; 
    string s; cin >> s;

    if(n == 1){
        cout << s <<"\n";
    }else{

        int ini = 1; 
        string ans = "";
        
        ans += s[0];
        for(int fin = 1; fin < n; ){
            ans += s[fin];
            ini++;
            fin += ini;
        }

        cout << ans <<"\n";
    }

return 0;
}