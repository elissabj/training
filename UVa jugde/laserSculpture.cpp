//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=2730
#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows, columns, aux;

    while(cin >> rows >> columns && rows != 0 && columns != 0){
        
        int timesLaser = 0, prevCut = rows;

        for(int i = 0; i < columns; i++){
            cin >> aux;
            if(aux < prevCut){
                timesLaser += (prevCut - aux);
            }

            prevCut = aux;
        }

        cout <<timesLaser<<"\n";
    }

return 0;
}