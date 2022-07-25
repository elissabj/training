// https://codeforces.com/problemset/problem/220/A

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n; 
    vector <long long>v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int ct = 0;
    vector<long long> v2 = v;
    sort(v2.begin(),v2.end());
    
    for(int i = 0; i < n; i++){
        if(v[i] != v2[i]){
            ct++;
        }
    }
    
    
    if(ct > 2){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
    
return 0;
}