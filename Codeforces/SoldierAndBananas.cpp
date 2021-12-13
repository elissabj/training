//https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
int main(){
 
    ll k,n,w, sum = 0;
    cin>> k >> n >> w;
 
    for(ll i = 0; i < w; i++){
        sum += (k*(i+1));
    }
    
    cout << (sum>n? sum-n: 0);
    cout <<"\n";
 
return 0;
}