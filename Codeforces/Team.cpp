//https://codeforces.com/contest/231/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int numeros;
    cin >> numeros;
    int respuesta = 0;
    while(numeros--){
        int a, b, c;
        cin >> a >> b >> c;
        
        if((a+b+c) >= 2){
            respuesta++;
        }        
    
    }
    cout << respuesta << endl;
return 0;
}
