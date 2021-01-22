//https://codeforces.com/contest/1473/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n, d; cin >> n >> d;
    
    vector<int> valores;
    
    bool todosMenoresD = true;
    
    for(int i = 0; i < n; i++){
        int aux; cin >> aux;
        if(aux > d)todosMenoresD = false;
        valores.push_back(aux);
    }
    
    if(todosMenoresD)cout<<"YES\n";
    else{
        sort(valores.begin(), valores.end());
        if(valores[0]+valores[1] <= d){
            cout<<"YES\n";
        }else{
            cout <<"NO\n";
        }
    }
}

int main(){

    int t; cin>>t;
    while(t--){
        solve();
    }
return 0;
}