//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3503
#include<bits/stdc++.h>
using namespace std; 
int ct;

int sumaPila(vector<stack<char>> &c, char &s){

    stack<char>ini;

    for(int i = 0; i < c.size(); i++){
        if (s <= c[i].top()){
            c[i].push(s);
            return 0;
        }
    }

    c.push_back(ini);
    c[c.size()-1].push(s);
    return 1;

}


int main(){
    
    string s, a ="end";
    while(cin >> s && s != a){

        ct++;
        int total_pilas = 0;
        vector<stack<char>> conten;

        for(int i = 0; i < s.size(); i++){   
           char aux = s[i];
           total_pilas += sumaPila(conten, aux);
        }

        cout <<"Case "<<ct<<": "<<total_pilas<<"\n";
    
    }
return 0;
}