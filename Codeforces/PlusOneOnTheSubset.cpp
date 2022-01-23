//https://codeforces.com/contest/1624/problem/A
#include<bits/stdc++.h>
using namespace std;

#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

void solve(){

    int n; 
    cin >> n; 
    
    long long int maxi = LLONG_MIN, mini = LLONG_MAX, aux;

    for(int i = 0; i < n; i++){
        cin >> aux; 
        maxi = max(maxi, aux);
        mini = min(mini, aux);
    }

    cout << maxi - mini <<"\n";

    return; 
}


int main(){ __

    int t; cin >> t; 

    while(t--){
        solve();
    }

return 0;
}