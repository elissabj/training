#include<bits/stdc++.h>
using namespace std;


int main(){

    int cont = 0;
    map<string, int> lista_palabras;
    queue<string> combinaciones_palabra;

    //llenamos la cola y el map de 1 a 26
    for(char i = 'a'; i <= 'z'; i++){
        cont++;
        string aux = {i};
        lista_palabras[aux] = cont;
        combinaciones_palabra.push(aux);
    }



    int veces = 83000;
    while(veces--){

        string aux= combinaciones_palabra.front();

        for(char i= aux[aux.size()-1]+1; i <= 'z'; i++){

            cont++;
            string nueva = aux + i;
            lista_palabras[nueva] = cont;
            combinaciones_palabra.push(nueva);
        }

        combinaciones_palabra.pop();
    }
    
    string s;
    while(cin >> s){
       cout<< lista_palabras[s]<<endl;
    }
return 0;
}