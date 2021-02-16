//https://codeforces.com/contest/1485/problem/A
#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int a, long long int b){
    
    long long int it = 0, ct = 0, ct_min = 1e12;

    if (a == b) return 2;
    else if (a < b) return 1;
    else{

        if (b == 1) it = 1;
        while(it <= 30){

            ct = it;
            long long int aux = a;

            while( aux > 0){
                aux = floor(aux / (b+it));
                ct++;
            }

            ct_min = min (ct_min, ct);
            it++;
        }
    }

    return min (ct_min, ct);
}


int main(){

    int t; cin >> t; 
    while(t--){
        long long int a, b; cin >> a >> b;
        cout << solve(a, b)<<"\n";
    }
return 0;
}