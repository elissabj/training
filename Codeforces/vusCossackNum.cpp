//https://codeforces.com/problemset/problem/1186/D
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    vector<double>values(n);

    int suma = 0;

    for(int i = 0; i < n; i++){
        cin >> values[i];
        suma += int(values[i]);
    }

    if(suma == 0){
        for(int i = 0; i < n; i++){
            cout << int(values[i]) <<"\n";
        }
    }else if (suma > 0){
        for(int i = 0; i < n; i++){
            if(values[i] < 0 && suma != 0){
                if(values[i] - int(values[i]) != 0.0){
                    values[i] = values[i] - 1.0;
                    suma --;
                }
            }
            cout << int(values[i]) <<"\n";
        }
    }else{
        suma = abs(suma);
         for(int i = 0; i < n; i++){
            if(values[i] > 0 && suma != 0){
                if(values[i] - int(values[i]) != 0.0){
                    values[i] = values[i] + 1.0;
                    suma --;
                }
            }
            cout << int(values[i]) <<"\n";
        }
    }
return 0;
}