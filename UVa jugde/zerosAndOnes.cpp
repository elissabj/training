//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=1265
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    int i, j, n, ct = 1;
    while(cin >> str){

        cout <<"Case "<<ct<<":\n";
        cin >> n;

        for(int k = 0; k < n; k++){
            bool flag = true;
            int a, b; cin >> a >> b;
            i = min(a,b);
            j = max(a,b);
           
            for(;i < j; i++){
                if(str[i] != str[i+1]){
                    flag = false; break;
                }
            }

            (flag)? cout<<"Yes\n":cout<<"No\n";
        }

        ct++;
    }

return 0;
}