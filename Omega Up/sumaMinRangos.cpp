//https://omegaup.com/arena/problem/maria/#problems
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__

    ll n; cin >> n; 
    vector<ll> v(n,0);

    for(int i = 0; i < n; i++){
        cin >>  v[i];
    }

    ll left = 1;
    ll right = 1;

    ll sumRange = 0;

    for(ll i = 0; i < n; i++){
        ll val = v[i];

        for(ll j = i-1; j >= 0; j--){
            if(val < v[j]){
                left++;
            }else{
                break;
            }
        }
        for(ll j = i+1; j < n; j++){
            if(val < v[j]){
                right++; 
            }else{
                break;
            }
        }
       
        sumRange += (val*left*right);

        left = 1; right = 1;
    }

    cout << sumRange <<"\n";

return 0;
}