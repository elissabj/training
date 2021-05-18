#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b; 
    while(cin >> a >> b && a != -1 && b != -1){

        int aux =  100 - abs(b-a)%100;
        int inverse_aux = 100 - aux;
        cout << min(aux, inverse_aux)<<"\n";
    }
return 0;
}