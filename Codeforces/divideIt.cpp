//https://codeforces.com/problemset/problem/1176/A
#include<bits/stdc++.h>
using namespace std;

long long int solve( long long int n){

    long long int ct = 0; 
    while(n > 0){
        if(n == 1){return ct;}
        else if(n % 2 != 0 && n%3 != 0 && n%5 != 0){
            return -1;
        }else if (n % 2 == 0){
            n = n /2; ct++;
        }else if( n % 3 == 0){
            n = (2*n) / 3; ct++;
        }else if(n % 5 == 0){
            n = (4*n) / 5; ct++;
        }
        
    }
}

int main(){

    long long int q; 
    cin >> q;

    while(q--){
        long long int n; cin >> n; 
        cout << solve(n)<<"\n";
    }
return 0;
}