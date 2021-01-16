//https://codeforces.com/problemset/problem/520/B
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    
    int res = 0;
   while(n != m){
        if(n < m){
                if( m % 2 != 0){
                    m += 1 ; res++;
                }else{
                    m = m / 2; res ++;
                }
            }
        if(n > m){
            m+= 1; res++;
        }
       
       
    }

    cout << res << endl;
return 0;
}
