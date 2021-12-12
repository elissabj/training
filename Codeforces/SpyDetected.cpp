//https://codeforces.com/contest/1512/problem/A
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>> n; 
    //value, times, pos
    unordered_map<int,int>dict;
    
    unordered_map<int,int>posi;
    
    for(int i = 0; i< n; i++){
        int aux; cin >> aux;
        dict[aux]++;
        posi[aux] = i+1;
    }
    
    
    int unique = 0;
    for(auto it: dict){
        if(it.second == 1){
            unique = it.first; break;
        }
    }
    
    cout << posi[unique]<<"\n";
    
return;
}
 
int main(){
    int t; cin >> t;
    
    while(t--){
        solve();
    }
 
return 0;
}