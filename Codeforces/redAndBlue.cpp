//https://codeforces.com/contest/1469/problem/B
#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n; cin >> n;

    int max_rojos = 0;
    int suma_actual = 0;
    for (int i = 0; i < n; i++){
        int valor; cin >> valor;
        suma_actual += valor;
        max_rojos = max(max_rojos, suma_actual);
    }

    int m; cin >> m;

    suma_actual = 0;
    int max_azules = 0;
    
    for(int i = 0; i < m; i++){
        int aux; cin >> aux;
        suma_actual += aux;
        max_azules = max(max_azules, suma_actual);
    }
cout << max_rojos + max_azules <<"\n";
}


int main(){

    int t; cin >> t;

    while(t--){
        solve();
    }

return 0;
}