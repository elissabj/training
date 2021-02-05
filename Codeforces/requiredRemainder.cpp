//https://codeforces.com/contest/1374/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve(){

    long long int x, y, n;
    cin >> x >> y >> n;

    long long int z = n % x;

    if (z > y){
        cout << n - (z-y) <<"\n"; 
    }else if (z == y){
        cout << n << "\n";
    }else{
        cout <<  n - (z + (x - y)) <<"\n"; 
    }

}

int main(){

    long long int t; 
    cin >> t; 

    while(t--){
        solve();
    }
return 0 ;
}