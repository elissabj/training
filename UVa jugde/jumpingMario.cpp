//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2864
#include<bits/stdc++.h>
using namespace std;

void solve(int &ct){

    int n; cin >> n; 

    int prev_jump, c_jump, maxJ = 0, minJ = 0;

    cin >> prev_jump;

    for(int i = 1; i < n; i++){
        cin >> c_jump;
        if(c_jump < prev_jump){
            minJ++;
        }else if (c_jump > prev_jump) {
            maxJ++;
        }

        prev_jump = c_jump;
    } 

    cout <<"Case "<<ct<<": "<<maxJ<<" "<<minJ<<"\n";

return;
}


int main(){

    int t, ct = 1;
    cin >> t; 

    while(t--){
        solve(ct);
        ct++;
    }

return 0;
}