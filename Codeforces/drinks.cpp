//https://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
using namespace std;


int main(){


    int n; cin >> n;

    double res = 0.0;
    
    for(int i = 0; i < n; i++){
        double aux; cin >> aux; 
        res += (aux/100);
    }

    cout << fixed << setprecision(12) << (res/double(n))*100 <<"\n";
return 0;
}