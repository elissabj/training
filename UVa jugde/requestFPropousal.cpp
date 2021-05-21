//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=1082
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, p, ct = 1;
    while(cin >> n >> p && n!= 0 && p != 0){

        string company, win;
        cin.ignore();
        for(int i = 0; i < n; i++){
           getline(cin, company);
        }
        
        double presu, num_r, max_r = -1e6, min_presu = 1e6;
        for(int i = 0; i < p; i++){
            getline(cin,company); 
            cin >> presu >>num_r;
            
            if((max_r < num_r) || (max_r == num_r && presu < min_presu)){
                max_r = num_r;
                win = company;
                min_presu = presu;
            }
            cin.ignore();
            for(int i = 0; i < num_r; i++){
                getline(cin,company);
            }
            
        }
        if(ct > 1){
            cout <<"\n";
        }
        cout <<"RFP #"<<ct<<"\n"<<win<<"\n";
        ct++;
    }
return 0;
}