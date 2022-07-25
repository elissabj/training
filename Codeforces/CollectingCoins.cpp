// https://codeforces.com/contest/1294/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

void solve(){

    vector<ll> v; ll n; 

    for(int i = 0; i < 3; i++){
        cin >> n;
        v.push_back(n);
    }

    cin >> n; 

    sort(v.begin(), v.end());

    ll diff = 2 * v[2] - v[1] - v[0];
    n -= diff;

    if(n < 0 || n % 3 != 0){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
    
return;
}

int main(){

    int t; cin >> t; 

    while(t--){
        solve();
    }

}