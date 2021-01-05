//https://codeforces.com/contest/43/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cin >> num;
    map <string, int> mapa;
    
    
    for(int i = 0; i < num; i++){
        string aux; cin >> aux;   
        mapa[aux]++;
    }

    string res;
    int aux = -1;
    
    for(auto x:mapa){
        if(x.second > aux){
            res = x.first;
            aux = x.second;
        }
    }

    cout << res << endl;
return 0;
}
