/*https://omegaup.com/arena/problem/Producto-punto-de-dos-vectores/*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n; 
    vector<int> a(n);
    vector<int> b(n);

    for(auto &valor: a){
        cin >> valor;
    }

    for(auto &valor: b){
        cin >> valor;
    }

    int suma_total = 0;
    for(int i = 0; i < n; i++){
        suma_total += a[i]*b[i];
    }

    cout << suma_total <<"\n";
return 0;
}
