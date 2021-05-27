//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=2708
#include<bits/stdc++.h>
using namespace std;

int main(){

    string way;
    long long int n;
    while(cin >> n && n != 0){
        cin >> way;

        int curr_distance = 0, min_distance = 1e6;
        int pos_start = 0, pos_end = 0;

        for(int i = 0; i < way.size(); i++){
            if(way[i] == 'Z'){ min_distance = 0; break;}
            if(way[i] == 'R'){ pos_start = i+1;}
            if(way[i] == 'D'){ pos_end = i+1; }
            if(pos_start != 0 && pos_end != 0){
                curr_distance = abs(pos_start - pos_end);
                min_distance = min(min_distance, curr_distance);
            }
        }

        cout << min_distance <<"\n";
    }

return 0;
}