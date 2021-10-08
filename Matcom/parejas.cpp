//https://matcomgrader.com/problem/9244/particion-en-parejas/
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long tam; cin >>tam;
    vector<int> numeros;

    for(int i = 0; i < (tam*2); i++){
        long long aux; cin>> aux;
        numeros.push_back(aux);
    }

    sort(numeros.begin(),numeros.end());

    long long resta = 0;
    for(int i = 0, j = numeros.size()-1; i<j; i++,--j){
        long long aux = numeros[j]-numeros[i];
        resta += aux;
    }
    
cout << resta <<"\n"; 

}