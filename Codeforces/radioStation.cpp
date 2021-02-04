//https://codeforces.com/contest/918/problem/B
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >> m;

    map<string, string> datos_unicos;

    for(int i = 0; i < n; i++){
        string nombre, ip; cin >> nombre >> ip;
        ip +=";";
        datos_unicos[ip] = nombre;
    }
   
    for(int i = 0; i < m; i++){
        string nombre, ip; cin >> nombre >> ip;
        cout << nombre <<" " <<ip <<" #"<< datos_unicos[ip]<<"\n";
    }

return 0;
}
