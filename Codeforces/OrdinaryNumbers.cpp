//https://codeforces.com/contest/1520/problem/B

#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);
typedef long long int ll;
 
void solve(){
    
    ll n; cin >> n; 
    
    if(n >= 1 && n <= 9){
        cout << n <<"\n"; return;
    }
    
    ll ct = 9;
    
    for(ll i = 11; i <= n; i= i*10 + 1){
        int multiply11 = 1;
        while(multiply11 <= 9){
            if(i*multiply11 <= n){
                ct++;
            }
            multiply11++;
        }
    }
    
    cout << ct <<"\n";
   
return;
}
 
 
int main(){__
    
    ll t;
    cin >> t;
    
    while(t--){
        solve();
    }
 
return 0;
}