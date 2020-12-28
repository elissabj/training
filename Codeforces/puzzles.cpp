#include<bits/stdc++.h>
using namespace std;

int main(){

    int buys, puz;
    cin >> buys >> puz;

    vector<int> values(puz);
    for(auto &x : values){
        cin >> x;
    }

    sort(values.begin(), values.end());

    /*
    4 6 
    5 7 10 10 12 22
    ans = 5
    5 7 10 10 12 22
      i       i
      aux = 12 - 7
    5 7 10 10 12 22
        i         i
      aux = 22 - 10 
    2 it que tiene que hacer OJO 
    */
    int aux = 0;
    int ans = values[buys-1] - values[0];
    for(int i = 1; i <= puz - buys; i++){
        aux = values[i+buys-1]-values[i];
        if(aux < ans){
            ans = aux;
        }
    }
    cout << ans <<"\n";

return 0;
}