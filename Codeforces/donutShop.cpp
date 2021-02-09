//https://codeforces.com/contest/1373/problem/A
#include<bits/stdc++.h>
using namespace std; 

void solve(){

    long long int a, b, c;
    cin >> a >> b >> c;

    if(a < c){
        cout << "1 ";
    }else{
        cout << "-1 ";
    }

    if(c < a*b){
        cout << b <<"\n";
    }else{
        cout << "-1\n";
    }

}


int main(){

    int t; cin >> t;

    while(t--){
        solve();
    }

return 0;
}