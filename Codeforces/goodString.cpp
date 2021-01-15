//https://codeforces.com/problemset/problem/1140/B
#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int izq = 1e6, der = 1e6; 
        
        for(int i = 0; i < n; i++){
            if(s[i] == '>'){
                izq = i; break;
            }
        }
        
        for(int i = n-1, j = 0; i >= 0; i--, j++){
            if(s[i] == '<'){
                der = j; break;
            }
        }
        //cout << izq << " " << der << endl;
        cout << min(izq, der) << endl;
        
    }
    
    return 0;
    
}
