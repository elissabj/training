/*https://omegaup.com/arena/problem/Filtrando-multiplos/*/
#include<bits/stdc++.h>
using namespace std;

void ponerX(int n, int k, vector<int>arr){

    string res = "";
    for(int i = 0; i < n; i++){
        if(arr[i] % k != 0){
            res +="X";
            res +=' ';
        }else{
            res += to_string(arr[i]);
            res += ' ';
        }
    }

    cout << res <<"\n";
}


int main(){

    int n; cin >> n;
    vector<int> numeros(n);

    for(int i = 0; i < n; i++){
        cin >> numeros[i];
    }

    int k; cin >> k;

    ponerX(n,k,numeros);
return 0;
}
