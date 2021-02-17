//https://codeforces.com/contest/1287/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t; 
    while(t--){
        int k; cin >> k;
        bool flag = false; 
        int ct = 0, max_p = 0;
        for (int i = 0; i < k; i++){
            char aux; cin >> aux;
            if(aux == 'A'){
                flag = true;
                max_p = max(max_p, ct);
                ct = 0;
            }else if (flag){
                ct++;
            }
        }

        cout << max(max_p, ct) <<"\n";
    }

return 0;
}