//https://codeforces.com/contest/116/problem/A
#include<bits/stdc++.h>
using namespace std; 

int main(){

    int paradas;
    cin >> paradas;
    int entra, sale;
    vector<pair<int,int>>parada;
    
    for (int i = 0; i < paradas; i++){
        cin >> entra;
        cin >> sale;
        parada.push_back({entra,sale});
    }
    
    int aux = 0; 
    int min = 0;
    for (int i = 0; i < paradas; i++){
        aux += parada[i].second;
        if(aux > min){
            min = aux;
        }
        aux -= parada[i+1].first;
    }    
   cout << min  << endl;
return 0;
}
