//https://codeforces.com/problemset/problem/1000/A
#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n; cin>>n;
    
    map<string, int> map1;
    
    for(int i = 0; i < n; i++){
        string s; cin>>s;
        map1[s]++;
    }
    
    for(int i = 0; i < n; i++){
        string s; cin>>s;
        map1[s]--;
    }
    
    int res = 0;
    for(auto x: map1){
        if(x.second >= 0){
            //cout << x.first << " " << x.second << "\n";
            res += abs(x.second);
        }
            
    }
    
    cout << res << "\n";
    
    return 0;
}
