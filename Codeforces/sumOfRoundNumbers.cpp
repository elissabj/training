//https://codeforces.com/problemset/problem/1352/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    
    int  n = stoi(s);
    int cont = 0;
    
    int millar1 = n / 10000; if(millar1 != 0) cont++;
    int millar = (n -(millar1*10000))/ 1000;  if(millar != 0) cont++;
    int cent = (n -(millar1*10000 + millar*1000))/ 100;  if(cent != 0) cont++;
    int dec = (n -(millar1*10000 + millar*1000+ cent*100))/ 10;  if(dec != 0) cont++;
    int u = n-(millar1*10000 + millar*1000+ cent*100 + dec*10); if(u != 0) cont++;
    
    cout <<cont <<"\n";
    if(millar1 != 0){
        cout << millar1*10000;
    }
    if(millar != 0){
        cout << millar*1000<<" ";
    }
    if(cent != 0){
        cout << cent*100 <<" ";
    }
    if(dec != 0){
        cout << dec*10 <<" ";
    }
    if(u != 0){
        cout << u <<" ";
    }
}


int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
        cout <<"\n";
    }
return 0;
}