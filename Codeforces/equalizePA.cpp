//https://codeforces.com/contest/1234/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int sum = 0;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            int  aux; cin  >> aux;
            sum += aux;
        }

        cout << int(ceil((sum+0.0)/n)) <<"\n";
    }
return 0;
}