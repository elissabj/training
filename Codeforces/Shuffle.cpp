// https://codeforces.com/problemset/problem/1366/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){

    ll n,x,m,l,r;
    cin >> n >> x >> m;

    ll rangoLeft = -1, rangoRight = -1;
    while(m--){
        
        cin >> l >> r;
        r = max(l,r);
        l = min (l,r);

        if(rangoLeft != -1 && rangoRight != -1){  
            
            if(r == rangoLeft && l < rangoLeft){ 
                rangoLeft = l;
            }else if(l == rangoRight && r > rangoRight){   
                rangoRight = r;
            }else if(l  < rangoLeft && r  > rangoLeft && r < rangoRight){  
                rangoLeft = l;
            }else if (l  > rangoLeft && l < rangoRight && r > rangoRight){
                rangoRight = r;
            }else if (l  < rangoLeft && r  > rangoRight){  
                rangoLeft = l;
                rangoRight = r;
            }

        }else{ 
            if(x >= l && x <= r){  
                rangoLeft = l; rangoRight = r;
            }
        }
    } 

    cout  << rangoRight-rangoLeft+1<<"\n";

return;
}



int main(){

    int t; cin >> t;

    while(t--){
        solve();
    }
return 0;
}