//https://codeforces.com/gym/101466/problem/B
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n; cin >> n;
    vector<long long> valores;

    for(long long i = 0; i < n; i++){
        long long aux; cin >> aux;
        valores.push_back(aux);
    }

    sort(valores.rbegin(), valores.rend());

    long long mul = valores[0];
    long long suma = valores[0];

    for(int i = 1; i < valores.size(); i++){
        mul = mul * valores[i];
        suma += mul;
    }

 cout<< suma+1 <<"\n";
 
return 0;     
}
