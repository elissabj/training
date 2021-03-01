//https://omegaup.com/arena/problem/Ms/#problems
#include<bits/stdc++.h>
using namespace std;


int main(){

    long long int n, media = 0, moda = -1e6, ct = 0, valor = 0, mediana = 0; 
    
    cin >> n;
    vector<long long int> v;
    map<long long int, long long int>valores;

    for(int i = 0; i < n ; i++){
        long long int aux; 
        cin >> aux; media += aux;
        valores[aux]++;
        v.push_back(aux);
    }

    sort(v.begin(),v.end());
    mediana = floor(n/2);
    //for(auto it = valores.begin(); it != valores.end(); it++){
    for(auto x: valores){
        if(x.second > moda){
            moda = x.second;
            valor = x.first;
        }

    }

   
    media =floor(media/n);
    cout<<"Media: "<<media<<"\n";
    cout<<"Moda: "<<valor<<"\n";
    cout<<"Mediana: "<<v[mediana]<<"\n";
return 0;
}