//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=289
#include<bits/stdc++.h>
using namespace std;

 /*
 funcion extra para validar si es palindromo
 bool esPalindromo (const string &cad){
  string aux = reverse(cad.begin(), cad.end());
  if(aux == cad) return true;
  return false;
 }
 */

bool esPalindromo(const string &cad){
    for(int i = 0, j =cad.size()-1; i < j; i++,j--){
        if(cad[i] != cad[j]){
            return false;
        }
    }
  return true;
}

void solve(string & cadena){

    set<string> substr_unicas;
    
    for(auto x: cadena){substr_unicas.insert(to_string(x));} //'s', 'e','l','n', 'ele', 'ene'

    string aux = cadena; 
    for(int i = 0; i < cadena.size(); i++){
       
       int cont = cadena.size()-i;
       aux = aux.substr(i, cont);
       
       while(aux.size() >= 2){
           if(esPalindromo(aux)){
               substr_unicas.insert(aux);
           }
           aux = aux.substr(0,cont);
           cont--;
       }
    
      aux = cadena;
    }

    cout << "The string '" << cadena << "' contains " << substr_unicas.size() << " palindromes.\n"; 

}

int main(){

    //declaro mi cadena
    string cadena;
    while(cin>> cadena){
        solve( cadena );
    }

return 0;
}
