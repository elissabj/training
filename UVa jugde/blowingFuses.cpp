//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=602
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,c, ins, ct = 1;
    while(cin >> n >> m >> c && n!= 0 && m!= 0 && c != 0){

        bool possible = true;
        vector<int>consume(n);
        for(int i = 0; i < n; i++) cin >> consume[i];

        vector<int>itsOn(n, 0);
        int curr_amp = 0, max_amp = -1e6;

        for(int i = 0; i < m ; i++){
            cin >> ins;
            if(curr_amp > c){possible = false;}
            if(itsOn[ins-1] == 0){
                curr_amp += consume[ins-1];
                itsOn[ins-1] = 1;
            }else{
                curr_amp -= consume[ins-1];
                itsOn[ins-1] = 0;
            }

            max_amp = max(max_amp, curr_amp);
        }

        if(curr_amp > c) possible = false;
        cout << "Sequence "<<ct <<"\n"; 
        (possible)? cout << "Fuse was not blown.\nMaximal power consumption was "<<max_amp<<" amperes.\n":cout<<"Fuse was blown.\n";
        cout <<"\n"; ct++;
    }

return 0;
}