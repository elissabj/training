//https://codeforces.com/contest/34/problem/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int venta, compra;
    cin >> venta >> compra;
    vector<int>tv_s;
    int ganancia = 0;
    
    for(int i = 0; i < venta ; i++){
        int aux; cin >> aux;
        tv_s.push_back(aux);
    }
    
    sort(tv_s.begin(), tv_s.end());

    for(int i = 0; i < venta ; i++){
        if(compra != 0){
            if(tv_s[i] < 0){
                ganancia += tv_s[i];
                compra--;
            }
        }
    }
    
    cout << abs(ganancia) << endl; 
return 0;
}
