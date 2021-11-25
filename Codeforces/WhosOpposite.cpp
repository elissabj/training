//https://codeforces.com/problemset/problem/1560/B

#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);
typedef long long int ll;


void solve(){
    
    ll a,b,c;
    cin >> a >> b >> c; 
    
    ll k = abs(a-b);
    ll totalNodes = k*2;
    
    if(totalNodes < a || totalNodes < b || totalNodes < c){
        cout  << "-1\n"; return;
    }
    
    ll n = c+k%totalNodes; 
    
    
    cout<< n <<"\n";
   
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