//https://omegaup.com/arena/problem/Control-de-Calidad/#problems
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n; cin >> n; 

    vector<long long int>libros(n);
    for(long long int i = 0; i < n; i++){
        cin >> libros[i];
    }

    long long int ultimoCero = 0;
    long long int izq = 0, der = n-1, mitad;

    while(izq <= der){
        mitad = (izq+der) /2;
        if(libros[mitad] == 1){
            ultimoCero = mitad;
        }
        if(libros[mitad] <= 0){
            izq = mitad+1;
        }else{
            der = mitad-1;
        }
    }

    cout << ultimoCero <<"\n";

return 0;
}