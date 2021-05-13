//https://codeforces.com/contest/71/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    
   if(s.size() <= 10){
    cout << s <<"\n";
   }else{
        int ct = 0;
        for(int i = 1; i < s.size()-1 ; i++){
            ct++;
        }
        cout <<s[0] <<ct <<s[s.size()-1]<<"\n";
   }
}

int main(){
    int t;
    cin >> t; 
    while(t--){
        solve();
    }
return 0;
}
