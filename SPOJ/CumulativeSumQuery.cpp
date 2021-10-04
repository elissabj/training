//https://www.spoj.com/problems/CSUMQ/
#include<bits/stdc++.h>
using namespace std; 
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);                    
typedef long long int ll;                   

                 
                    
int main(){__

    ll n; cin >> n; 

    vector<ll> originalValues(n,0);
    vector<ll> acumVal(n,0);

    for(ll i = 0; i < n; i++){
        cin >> originalValues[i];
    }

    acumVal[0] = originalValues[0];

    for(ll i = 1; i < n ; i++){
        acumVal[i] = originalValues[i] + acumVal[i-1];
    }
    

    ll q; cin >> q; 
    ll left, right; 

    while(q--){
        
        cin >> left >> right; 

        if(left == right){
            cout << originalValues[left]<<"\n";
            continue;
        }

        if(left == 0){
            cout << acumVal[right]<<"\n";
            continue;
        }

        cout << acumVal[right]-acumVal[left-1]<<"\n";

    }


return 0; 
}