// https://codeforces.com/contest/1399/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){

    int n; cin >> n;

    vector<ll>v(n);
    vector<ll>v2(n);

    ll miniA = LLONG_MAX;
    ll miniB = LLNOG_MAX;


    for(int i = 0; i < n; i++){
        cin >> v[i];
        miniA = min (v[i], miniA);
    }

    for(int i = 0; i < n; i++){
        cin >> v2[i];
        miniA = min (v[i], miniB);
    }


    ll steps = 0;
    for(int i = 0; i < n; i++){
        steps += max (v[i]-miniA, v2[i]-miniB);
    }

    cout << steps << "\n";

return;
}

int main(){

    int t; cin >> t; 

    while(t--){
        solve();
    }

return 0;
}