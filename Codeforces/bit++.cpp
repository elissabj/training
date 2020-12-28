//https://codeforces.com/contest/282/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int tam;
    int x = 0;
    cin >> tam;
    
   while(tam--){
        
       string instru;
       cin >> instru;
       
       if(instru[1] == '+'){
           x++;
        }else if(instru[1] == '-'){
            x--;
        }
       
    }
    cout << x <<  endl;
   
}


