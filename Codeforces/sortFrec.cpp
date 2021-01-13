//https://codeforces.com/gym/102343/problem/B
#include<bits/stdc++.h>
using namespace std;

bool ordenaSegundo(pair<char, int> x, pair<char, int> y){
	return x.second > y.second;//mayor a menor
}

int main(){

    string cad;
    cin >> cad;

    vector<pair<char, int>> frecuencias(26);
    //Maping
  	//Tomamos una string y por cada caracter le asignamos un codigo
  	// ascii
  	//a - 0  65 - 65 = 0
  	//b - 1  66 - 65 = 1
  	//c - 2  ...
  	// ...
    for(int i = 0; i < cad.size(); i++){
				int pos = cad[i] - 'a';
    		frecuencias[pos].first = cad[i];    	
    		frecuencias[pos].second++;
    }
  
  	stable_sort(frecuencias.begin(), frecuencias.end(), ordenaSegundo);

    for(int i = 0; i < frecuencias.size(); i++){
    	int veces = frecuencias[i].second;
      	while(veces--){
        	cout <<frecuencias[i].first;
        }
    }

	/*
	OP 2
	for(int i = 0; i < frecuencias.size(); i++){
    	for(int j = 0; j < frecuencias[i].second; j++){
        cout << frecuencias[i].first;
      }
    }
	*/
cout<<"\n";
return 0; 
}