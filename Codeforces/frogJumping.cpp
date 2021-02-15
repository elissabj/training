//https://codeforces.com/contest/1077/problem/A
#include<bits/stdc++.h>
using namespace std; 

long long int solve(long long int a, long long int b, long long int k){

    if(k % 2 != 0){
        return (a*((k/2)+1)) - (b*(k/2)); 
    }
return (a*(k/2)) - (b*(k/2)); 
}


int main(){

    int t; cin >> t;

    while(t--){
        long long int a, b, k; cin >> a >> b >> k; 
        cout << solve(a, b, k)<<"\n";
    }
return 0;
}