//https://codeforces.com/contest/1220/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int numero;
    cin >> numero; 
    int cont_e = 0;
    int cont_o = 0;
    int cont_n = 0;
    int cont_z = 0; int cont_zer = 0;
    int cont_r = 0; int cont_uno = 0;
    
    vector <char> palabra;
    
    for (int i = 0; i < numero; i ++){
    char a; cin >> a;
    if(a == 'e'){cont_e++;} else if (a == 'o'){cont_o++;}
    else if( a == 'n'){cont_n++;} else if ( a == 'z'){cont_z++;}
    else if( a == 'r') {cont_r++;}
    palabra.push_back(a);
    }
    
    
        while(cont_n >= 1){
            if(cont_e >= 1 && cont_o >= 1){
            cont_n--; cont_e--; cont_o--; cont_uno++;
            cout <<"1" <<" ";
            } else{break;}
        }
        
        while(cont_z >= 1){
             if(cont_e >= 1 && cont_o >= 1 && cont_r >= 1){
            cont_z--; cont_e--; cont_o--;cont_r--; cont_zer++;
            cout <<"0" <<" ";
            } else{break;}
        }
        
    cout <<"\n";

}
