//https://codeforces.com/contest/1478/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n; cin >> n; 
    vector <int> values(n);

    for(int i = 0; i < n; i++){
        cin >> values[i];
    }

    int ct = 1, ct_max = 1; 
    int anterior = values[0];
    for(int i = 1; i < n; i++){
        if(anterior == values[i]){
            ct++; 
        }else{
            if (ct > ct_max){
                ct_max = ct;
            }
            ct = 1;
        }
        anterior = values[i];
    }

    cout << max(ct_max, ct) <<"\n";
}

int main(){

    int t; cin >> t; 

    while(t--){
        solve();
    }
return 0;
}