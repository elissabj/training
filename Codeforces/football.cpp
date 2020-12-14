#include<bits/stdc++.h>
using namespace std;

int main(){

    string players;
    cin >> players;

    bool flag = false;
    int cont_zero = 0, cont_one = 0;

    for(int i = 0; i <= players.size(); i++){
        if((cont_one >= 7) || (cont_zero) >= 7){
            flag = true; break;
        } 
        if(players[i] == '0'){
            cont_zero++;
            cont_one = 0;
        }else{
            cont_one++;
            cont_zero = 0;
        }
    }

    if(flag){
        cout << "YES\n";
    }else{
        cout <<"NO\n";
    }

return 0;
}