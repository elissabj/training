#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int tam; cin >> tam;
    string cad; cin >> cad;

    int res = 0; 
    for(int i = 0; i < tam-1; i++){
        if(cad[i]== cad[i+1]){
            res++;
        }
    }

    cout << res <<"\n";
return 0;
}