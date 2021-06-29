//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=3107
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, ct = 1;
    cin >> t;
    while(t--){
        string code;
        cin >> code;

        int pos = 0;
        unsigned char memory[100] {};
        
        for(int i = 0; i < code.size(); i++){
            if(pos < 0){ pos = 99;}
            if(pos >= 100){pos = 0;}
            if(code[i] == '+'){
                memory[pos%100]++;
            }else if(code[i] == '-'){
                memory[pos%100]--;
            }else if (code[i] == '>'){
                pos++;
            }else if(code[i] == '<'){
                pos--;
            }
        }

        cout <<"Case "<<ct<<":";

        for(int i = 0; i < 100; i++){
            printf(" %02X", memory[i]);
        }
        cout <<"\n";
        ct++;
    }

return 0;
}