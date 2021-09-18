//https://codeforces.com/gym/101915/problem/C
#include<bits/stdc++.h>
using namespace std;

void solve(){
     
    long long n, k, p; 
    cin >> k >> p >> n;
    
    long long total = 0;
    long long respuesta = 0;
    
    if(p > k){respuesta = 0;
    }else{
    total = k * n;
    respuesta =(total - (p * n));}
    
    cout <<respuesta<<"\n";
}


int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
return 0;
}