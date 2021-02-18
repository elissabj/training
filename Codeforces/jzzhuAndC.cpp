//https://codeforces.com/problemset/problem/450/A

#include<bits/stdc++.h>
using namespace std;

bool ordenaPorSegundo(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}


int main(){

    int n, m; cin >> n >> m;

    queue<pair<int, int>> children;


    int ct = 1;
    int last_child = 0;

    for (int i = 0; i < n; i++){
        int valor; cin >> valor;
        if(valor > m){
           children.push({ valor - m, ct});
        }else{
            last_child = max(last_child, ct);
        }
        ct++; 
    }


    if (children.empty()){
        cout << last_child <<"\n";
    }else{

        last_child = 0;

        pair<int, int> aux;

        while (!children.empty()){
            aux = children.front();
            children.pop();
            
           
            if(aux.first > m){
                aux.first = aux.first - m;
                //cout << aux.first << " " << aux.second <<"\n";
                children.push(aux);
            }
        }

        cout << aux.second <<"\n";        
    }
   
return 0;
}