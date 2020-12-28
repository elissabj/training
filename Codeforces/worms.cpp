//https://codeforces.com/problemset/problem/474/B
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin>>n;
    vector< int > range(1e7+10);
    
    int x = 0;
    
    range[1] = 1;
    cin>>x;
    for(int i = 1; i <= x; i++){
        range[i] = 1;
    }
    range[x] = 1;
    
    int acum = x;
    
    for(int i = 2; i <= n; i++){
        range[acum+1] = i;
        int aux = acum+1;
        cin>>x; acum+=x;
        range[acum] = i;
        for(int j = aux; j <= acum; j++){
            range[j] = i;
        }
    }
    
    /*for(int i = 1; i <= 25; i++){
        cout<<range[i]<<" ";
    }*/
    
    int m; cin>>m;
    for(int i = 0; i < m; i++){
        int x; cin>>x;
        cout<<range[x]<<"\n";
        
    }
        
    
    return 0;
}
