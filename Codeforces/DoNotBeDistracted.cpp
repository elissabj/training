//https://codeforces.com/contest/1520/problem/A

#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>> n; 
    
    string s; cin >> s; 
    
    bool itsWeird = false;
    
    unordered_map<char,int>dict;
    
    for(int i = 0; i < n; i++){
        if(dict.count(s[i])){
            int aux =  i -  dict[s[i]] ;
            //cout << aux << " ";
            if(aux == 1){
                dict[s[i]] = i;
            }else{
                itsWeird = true; break;
            }
        }else{
            dict[s[i]] = i;
        }
    }
    
    cout << (itsWeird? "NO\n":"YES\n");
    
return;
}
 
int main(){
    int t; cin >> t;
    
    while(t--){
        solve();
    }
 
return 0;
}