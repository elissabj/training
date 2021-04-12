//https://codeforces.com/problemset/problem/451/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >> m; 

    if (n > m){
        (m % 2 == 0) ? cout <<"Malvika\n":cout <<"Akshat\n";
    }else{
        (n % 2 == 0) ? cout <<"Malvika\n":cout <<"Akshat\n";
    }

return 0;
}