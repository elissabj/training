//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2734
#include<bits/stdc++.h>
using namespace std;

int main(){

    string num, s;
    while(cin >> num && num[0] !='E'){
        int ct = 1;
        while(true){

            long long int aux = num.size();
            s = to_string(aux);

            if(s == num){
                break;
            }
            ct++;
            num = s;
        }
        
        cout<<ct<<"\n";
    }

return 0;
}