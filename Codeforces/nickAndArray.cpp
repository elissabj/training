//https://codeforces.com/problemset/problem/1180/B
#include<bits/stdc++.h>
using namespace std;

int main(){

    int tam; cin >> tam;
    vector<int> numeros;

    for(int i = 0; i < tam; i++){
        int aux; cin >> aux;
        if(aux >= 0){
            aux = ((0 - aux) - 1 );
        }
        numeros.push_back(aux);
    }

    if(tam % 2 != 0){
        int pos = min_element(numeros.begin(), numeros.end()) - numeros.begin();
        numeros[pos] = abs(numeros[pos]) -1;
    }

    for(auto x: numeros){
        cout <<x <<" ";
    }

return 0;
}