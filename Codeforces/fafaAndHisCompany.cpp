//https://codeforces.com/contest/935/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int numero;
    cin >> numero;
    
    int formas = 0;
    
    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){formas++;}
    }
    
    cout << formas -1 <<endl;


}
