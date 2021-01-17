//https://codeforces.com/contest/705/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int feel;
    
    cin >> feel;
  
  for( int i = 1; i <= feel; i++){
      if( i % 2 != 0 ){
                cout <<"I hate ";
            }else{
                cout <<"I love ";
            }         
            
            if( i == feel){
              cout <<"it";  
            } else {
                cout <<"that ";
            }
    }
    cout <<"\n";
    return 0;
}
