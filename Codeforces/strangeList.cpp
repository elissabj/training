//https://codeforces.com/contest/1471/problem/B
#include<bits/stdc++.h>
using namespace std;

void solve(){

    long long int n, x, sum = 0;
    cin >> n >> x;
    
    vector<pair<long long int, long long int>> values(n);
    
    for (long long int i = 0; i < n; i++){
        long long int aux; cin >> aux;
        values.push_back({aux, aux});
        sum += aux;
    }

    for(long long int i = 0;; i++){
        if (values[i].first % x != 0) break;
        if(values[i].first % x == 0){
            values[i].first /= x;
            sum += values[i].second; 
        }
        if (i == values.size()-1){
            i = 0;
        }
    }

    cout << sum <<"\n";
}

int main(){

    int t; cin >> t;
    while(t--){
        solve();
    }

return 0;
}