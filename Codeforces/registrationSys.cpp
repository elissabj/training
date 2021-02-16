//https://codeforces.com/contest/4/problem/C
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> regis;

    int n; cin >> n; 

    while(n--){
        string aux; cin >> aux;
        if(regis[aux]){
            cout << aux <<regis[aux]<<"\n";
            regis[aux+to_string(regis[aux])]++;
            regis[aux]++;
        }else{
            regis[aux]++;
            cout << "OK\n";
        }
    }
return 0;
}