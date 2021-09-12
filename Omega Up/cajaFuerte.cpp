//https://omegaup.com/arena/problem/Caja-Fuerte/#problems
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
int n, i, j;

int main(){__

    cin >> n;
    char aux;

    char matrix_original[n][n];
    memset(matrix_original,'0',sizeof(matrix_original));

    char matrix_change[n][n];
    memset(matrix_change,'0',sizeof(matrix_change));

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> aux;
            matrix_original[i][j] = aux;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> aux;
            matrix_change[i][j] = aux;
        }
    }

    int ini = 0, fin = n;
    int no_capas = n/2, total = 0, diferenciasA, diferenciasB;
    string str_original = "", str_cambio = "";

    while(no_capas--){
        
        diferenciasA = 0, diferenciasB = 0;
        str_original = "", str_cambio = "";
        
        i = ini; j = ini;
        for(; j < fin; j++){
            str_original += matrix_original[i][j];
            str_cambio += matrix_change[i][j];
        }
        
        
        j--; i++;
        for(; i < fin; i++){
            str_original += matrix_original[i][j];
            str_cambio += matrix_change[i][j];
        }

        
        i--; j--;
        for(;j >= ini; j--){
            str_original += matrix_original[i][j];
            str_cambio += matrix_change[i][j];
        }

        j++; i--;
        for( ;i > ini; i--){
            str_original += matrix_original[i][j];
            str_cambio += matrix_change[i][j];
        }

        if(str_original != str_cambio){
            int x = 0, x1 = 0;
            while(x1 < str_cambio.size()){
                if(str_cambio[x1] != str_original[x]){
                    diferenciasA++;
                }else{
                    x++;
                }
                x1++;
            }

            x = 0; x1 = 0;
            while(x < str_original.size()){
                if(str_cambio[x1] != str_original[x]){
                    diferenciasB++;
                }else{
                    x1++;
                }
                x++;
            }
        }

        total += min(diferenciasA, diferenciasB);
        ini++; fin--;
    }
    
    cout <<total<<"\n";

return 0;
}