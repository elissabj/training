#include<bits/stdc++.h>
using namespace std; 
/*
Código para generar todas las substrings de un string
selene
selen
sele
sel
se
s
elene
elen
ele
el
e
lene
len
le
l
ene
en
e
ne
n
e
*/
int main(){
    string s;
    cin >> s; 

    string aux = s; 
    string cad = s;
    for(int i = 0; i  < s.size(); i++){
      int cont = s.size()- i;
      aux = aux.substr(i,cont);

      int izq = i, der = i;
        while(aux. size() >= 2){   // se para hasta combinaciones de tamaño 2 (:       
            aux = aux.substr(0,cont);
            cont--;
            cout << aux <<endl;
        }
        aux = s;
    }
return 0;
}