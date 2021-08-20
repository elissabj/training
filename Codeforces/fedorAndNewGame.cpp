//https://codeforces.com/problemset/problem/467/B
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

int main(){__

    int n, m, k; 
    cin >> n >> m >> k;

    int ct_friends = 0;

    vector<bitset<32>>val;

    for(int i = 0; i < m+1; i++){
        int aux; cin >> aux;
        bitset<32> repreBin (aux);
        val.push_back(repreBin);
    }

    auto fedor = val[val.size()-1]; 

    for(int i = 0; i < m; i++){
        auto x = 0;
        auto amigo = val[i];
        for(int j = 0; j <= n; j++){
            x += (amigo[j] xor fedor[j]);
           
        }

        if(x <= k){
            ct_friends++;
        }
    }

    cout << ct_friends <<"\n";

return 0; 
}