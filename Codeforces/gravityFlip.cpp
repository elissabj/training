//https://codeforces.com/problemset/problem/405/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int tam; cin >> tam;

    vector<int> values(tam);

    for(int i = 0; i < tam; i++){
        cin >> values[i];
    }

    sort(values.begin(), values.end());

    for( auto it_values: values){
        cout << it_values <<" ";
    }

cout <<"\n";
return 0;
}