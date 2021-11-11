//https://atcoder.jp/contests/abc139/tasks/abc139_b?lang=en
#include<bits/stdc++.h>
using namespace std; 

int main(){
  
    int m, n;
    cin >> m >> n;
    
    int aux = 1;
    int res = 0; 
        
    while(true){
        if(aux >= n){break;}
        --aux;
        aux += m;
        res++;
    }

    cout << res <<"\n";
    
    
    return 0;
}