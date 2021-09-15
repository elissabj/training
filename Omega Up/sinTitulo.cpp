#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
set<ll>existMod;
ll w, n; 
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);


int main(){__

    
    cin >> w >> n;

    bool weCan = true;

    for(ll i = 2; i <= n; i++){
        if(existMod.count(w%i)){
            weCan = false; break;
        }
        existMod.insert(w%i);
    }


    (weCan)? cout <<"Si":cout <<"No";

return 0; 
}