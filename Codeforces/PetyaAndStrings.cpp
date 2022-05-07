// https://codeforces.com/problemset/problem/112/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    string a, b; 
    cin >> a >> b; 

    int ct = 0;

    for(int i = 0; i < a.size();i++){
        char aux = tolower(a[i]);
        char aux2 = tolower(b[i]);

        if(aux < aux2){
            ct = -1; break;
        }else if(aux > aux2){
            ct = 1; break;
        }
    }

    cout << ct <<"\n";

return 0;
}