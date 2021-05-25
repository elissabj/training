//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=2633
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin >> t;
    
    cin.ignore(); 
    string tracks;
    
    while(t--){
        getline(cin, tracks);
        int lastConector=0;

        for(int i = 0; i < tracks.size(); i++){
            if(tracks[i] != ' '){
                if(tracks[i] == tracks[i+1] ){
                    (tracks[i] == 'M')? lastConector++: lastConector--;
                }
            }
        }

        (lastConector == 0 && tracks.size() > 3)? cout <<"LOOP\n": cout <<"NO LOOP\n";
    }
    
return 0;
}