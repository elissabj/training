//https://codeforces.com/contest/318/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n, k;
    cin >> n >> k;
    
    long long aux = 0;
    long long aux2 = 0;
    
    if( n % 2 == 1){
        aux = (n / 2)+1;
        if(aux > k){
            aux2 = abs(aux - k);
                while(aux2 != 0){
                    n = n - 2;
                    aux2--;
                }
            cout << n << endl;
        }else if(aux < k){
            aux2 = abs(k - aux);
            n = 0;
                while(aux2 != 0){
                    n = n + 2;
                    aux2--;
                }
            cout << n << endl;
        }else{
            cout << n << endl;
        }
    }else{
        aux = (n / 2);
        if(aux > k){
            aux2 = k - 1;
            n = 1;
                while(aux2 != 0){
                    n = n + 2;
                    aux2--;
                }
            cout << n << endl;
        } else if(aux < k){
            aux2 = abs(aux - k);
            n = 0;
                while(aux2 != 0){
                    n = n + 2;
                    aux2--;
                } 
            cout << n << endl;
        }else if(aux == k){
            cout << n-1 << endl;
        }
    }
return 0;
}
