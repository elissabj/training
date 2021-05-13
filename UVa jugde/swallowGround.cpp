//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1904
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b, jumps = 0, prev = 0; 
    
    bool flag = true;
    cin >> n;
    
    cin >> a >> b;
    prev = a-b;

    n = n-1;
    while(n--){
        cin >> a >> b;
        jumps = a-b;
        
        if (prev != jumps){
            flag = false;
        }
    }

    if(flag) cout <<"yes\n";
    else cout <<"no\n";
return;
}

int main(){

    int t; cin >> t;
    while(t--){
        solve();
        if(t > 0)cout <<"\n";
    }

return 0;
}