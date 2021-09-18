//https://codeforces.com/problemset/problem/1367/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    string cadena;
    cin  >> cadena;
    
    char aux = cadena[0];
    string aux1(1,aux);
    aux1 += cadena;
    
    for(int i = 0; i < aux1.size(); i++){
        if(aux1[i] == aux1[i+1]){
            aux1.erase(aux1.begin()+i);
        }
    }

    cout << aux1 << "\n";
}

int main(){
    
    int test;
    cin >> test;
    
    while(test--){
        solve();
    }
return 0;
}