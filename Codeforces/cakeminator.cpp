//https://codeforces.com/problemset/problem/330/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main (){
   int m, n;
   cin>>m>>n;
   char x;
   vector< vector<int> > cake(m+1, vector<int>(n+1, 0));
   for(int i = 0; i < m; i++){
     for(int j = 0; j < n; j++){
       cin>>x;
       if(x == 'S')cake[i][j] = 1;
     }
   }

   /*for(int i = 0; i < m; i++){
     for(int j = 0; j < n; j++){
       cout<<cake[i][j]<<" ";
     }
    cout<<endl;
   }*/
   
   int m1 = 0, n1 = 0;
   for(int i = 0; i < m; i++){
       for(int j = 0; j < n; j++){
           if(cake[i][j] == 1){
             m1++;
             break;
           }
       }
   }

   for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           if(cake[j][i] == 1){
             n1++;
             break;
           }
       }
   }
   
   //cout<<m1<<" "<<n1<<endl;
   cout<<(m*n) - (m1*n1)<<"\n";
   
  return 0;
}
