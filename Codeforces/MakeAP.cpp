// https://codeforces.com/contest/1624/problem/B
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

void solve(){

    ll a,b,c;
    cin>> a >> b >> c;
    bool canDo = false; 
 
    if(b-a == c-b || (a == b && b==c)){ //todos son iguales
        canDo = true;
    }
 
    /*
    a*m, b ,c 
    b - a*m = c-b 
    a*m = 2*b - c > 0
    m = (2*b - c) / a  = 0 
    
    */
    if((2*b-c)%a == 0 && 2*b-c > 0){
        canDo = true;
    }
    
    /*
    a, m*b, c 
    a - m*b = b - c
    (-1) - m * b = b - c - a (-1)
    m = c + a / 2b  = 0
    */
    if((a+c) % (2*b) == 0){
        canDo = true;
    }

    /*
    a, b, c*m
    
    b - a = c*m - b
    2*b - a = c * m 

    m = [(2*b - a) > 0] / c = 0

    */

    if((2*b-a)%c == 0 && 2*b-a > 0){
        canDo = true;
    }

    cout << (canDo? "YES\n": "NO\n");
 

return; 
}


int main(){

    int t; cin >> t; 
    while(t--){
        solve();
    }

return 0;
}