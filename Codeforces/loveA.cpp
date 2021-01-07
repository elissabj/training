//https://codeforces.com/contest/1146/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    string cadena;
    cin >> cadena;
     int resultado = 0; int aux = 0;
    
    if(cadena.empty()){
        cout << "0" << endl;
    }
    else{
        int cuenta_a = 0;
        int cont_x = 0;
        for( int i = 0; i < cadena.size(); i++){
            if(cadena[i] == 'a'){
                cuenta_a++;
            }else{
                cont_x++;
            }
        }
        
    if (cuenta_a == cont_x){
            cout << cadena.size()-1;
            cout << endl;
        }
        else if( cuenta_a > cont_x || cuenta_a==cadena.size()){
            cout << cadena.size(); cout << endl;
        }
        else if(cuenta_a < cont_x){
            if (cuenta_a == 1){
                cout << "1"<<endl;
            }else{
               cont_x = cont_x - cuenta_a+1;
                cout << cadena.size() - (cont_x); cout << endl;
            }
        }
    }
return 0;
}
