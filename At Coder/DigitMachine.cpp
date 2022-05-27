// https://atcoder.jp/contests/abc241/tasks/abc241_a

#include<bits/stdc++.h>
 using namespace std;
 int main(){
   
   vector<long long int>numb(9);
   for(int i = 0; i < 10; i++){
     cin >> numb[i];
   }
   
   cout << numb[numb[numb[0]]] <<"\n";
    
  return 0; 
 }