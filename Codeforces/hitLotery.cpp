//https://codeforces.com/problemset/problem/996/A O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n; cin >> n;
    
    long long billetes = 0;
    long long aux = 0;

    aux = n/ 100; 
    billetes += aux;
    n = n - (aux*100);       
    aux = n / 20; 
    billetes += aux;
    n = n - (aux *20);
    aux = n / 10; 
    billetes += aux;
    n = n - (aux *10);
    aux = n / 5;
    billetes += aux; 
    n = n - (aux *5);
    aux = n;
    billetes += aux; 
    n = n - aux;      

cout << billetes <<"\n";
return 0;
}