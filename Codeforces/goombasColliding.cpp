//https://codeforces.com/gym/102966/problem/G
#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){

    lli l, g; 
    cin >> l >> g;

    lli max_temp = 0; 
    while(g--){
        lli p; int d; cin >> p >> d;
        
        lli aux = 0;
        if(d == 0){
            aux = l - (l - p);
            if (aux  > max_temp){
                max_temp = aux;
            }
        }else{
            aux = l - p;
            if (aux  > max_temp){
                max_temp = aux;
            }
        }
    }

    cout << max_temp <<"\n";
    
return 0;
}