//https://atcoder.jp/contests/abc129/tasks/abc129_a?lang=en
#include<bits/stdc++.h>
using namespace std; 

int main(){    
    //grafo bebe
    int matriz[4][4]; 
    memset(matriz, 0, sizeof(matriz));
    
    for(int i = 0; i < 3; i++){
        int peso;
        cin>>peso;
        
        if(i == 0){
            matriz[1][2] = peso;
            matriz[2][1] = peso;
        }else if(i == 1){
            matriz[1][3] = peso;
            matriz[3][1] = peso;
        }else{
            matriz[2][3] = peso;
            matriz[3][2] = peso;
        }
    }
    
    int aux = 0;
    int minimo = 1e6;
    
     for(int i = 1; i <= 3; i++){
         aux = 0;
        for(int j = 1; j <= 3; j++){
            aux += matriz[i][j];
        
        }
        if(aux < minimo){
            minimo = aux; 
        }
    }
    
    cout <<minimo;
    
    
    return 0;
}