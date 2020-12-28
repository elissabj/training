//https://codeforces.com/problemset/problem/1131/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main (){
    deque<ll> fila;
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)cin>>a[i];
    sort(a.begin(), a.end());
    
    fila.push_front(a[n-1]);
    
    for(int i = n-2; i >= 0; i-=2){
        if(fila.size() == n-1){
            fila.push_front(a[i]);
        } else{
            fila.push_front(a[i]);
            fila.push_back(a[i-1]);
        }
        
    }
    
    for(ll x: fila){
        cout << x << " ";
    }
    cout <<endl;
    
}
