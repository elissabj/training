//https://codeforces.com/problemset/problem/1328/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>> t;

    while(t--){
        long long int a, b;
        cin>> a >> b;
        (a % b == 0)? cout << "0\n" : cout << b - (a % b)<<"\n";
    }
return 0;
}