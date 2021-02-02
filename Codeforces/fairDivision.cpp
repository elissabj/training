//https://codeforces.com/problemset/problem/1472/B
#include<bits/stdc++.h>
using namespace std; 
void solve(){
    long long int n; cin >> n;
    long long int sumaUnos = 0;
    long long int sumaDos = 0;
    for(int i = 0; i < n; i++){
        int aux; cin >> aux; 
       if (aux == 1){
           sumaUnos ++;
       }else{
           sumaDos++;
       }
    }

    if (sumaUnos%2 == 0){
        if(n%2== 0 || (n %2 != 0 && sumaUnos > 0)){
            cout <<"YES\n";
        }else{
            cout <<"NO\n";
        }
    }else{
        cout <<"NO\n";
    }
}

int main(){

    int k; cin >> k;
    while(k--){
        solve();
    }
return 0;
}
