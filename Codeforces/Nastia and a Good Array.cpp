// https://codeforces.com/contest/1521/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
  
  int n; cin >> n;   
  vector<ll>v(n);
  
  ll miniGlobal = 1e9+20, pos = 0;
  
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] < miniGlobal){
      miniGlobal = v[i];
      pos = i;
    }
  }

  if(n == 1){
    cout << "0\n";
    return;
  }
  
  if(pos != 0){
     cout << n << "\n";
  	 cout << pos+1 << " 1 "<< miniGlobal <<" "<< miniGlobal<< "\n";
  }else{
     cout << n-1 << "\n";
  }
  
 
  for(int i = 1; i < n; i++){
    cout << 1 << " " << i+1 <<" "<< miniGlobal <<" "<< miniGlobal+i<< "\n";
  }
  
  
return;
}



int main(){
  
  int t; cin >> t;
  
  while(t--){
    solve();
  }
  
  
return 0;
}