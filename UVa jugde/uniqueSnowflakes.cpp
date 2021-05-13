//https://vjudge.net/problem/UVA-11572
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin >> t;
    while(t--){

        int contenedor;
        cin >> contenedor;


        map<long long, int> pos_copitos;
        vector<long long>copitos_nieve(contenedor);
        int valor_actual = 0, maximo = 0, pos_ini_actual = 0, pos_anterior = 0, antes_indice = 0;

        
        for(int i = 0; i < contenedor; i++)
            cin  >> copitos_nieve[i];
        
        for(int i = 0; i < contenedor; i++){
            if(!pos_copitos[copitos_nieve[i]]){
                if(i == 0){pos_copitos[copitos_nieve[i]] = -1;} //problema de inicializacion
                else 
                    pos_copitos[copitos_nieve[i]] = i;
                valor_actual++;
            }else{
               //pos_copitos.erase(pos_copitos.begin(), i);
               if(pos_copitos[copitos_nieve[i]] == -1){pos_copitos[copitos_nieve[i]]= 0;} // cambio el problema de inicializacion
               pos_anterior = pos_copitos[copitos_nieve[i]]; // indice del elemento repetido dentro del map 
               
               valor_actual = i - pos_anterior; // saco ahora la magnitud de mi nuevo corte
               pos_ini_actual = pos_anterior + 1 ; //saco desde donde inicio una vez hecho el corte
               
               //borro dentro de mi map al rango más a la izquierda (idea greedy)
               for(int j = antes_indice; j <= pos_anterior; ++j){
                   pos_copitos.erase(copitos_nieve[j]);
               }
               
               antes_indice = pos_ini_actual; //inicio del nuevo rango
               pos_copitos[copitos_nieve[i]] = i; // mete de nuevo el elemento repetido pero con el nuevo indice
            }

            maximo = max(maximo, valor_actual); // saco maximo
        }
        cout << maximo <<"\n";

    }
    return 0;
}
