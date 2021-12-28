//https://codeforces.com/problemset/problem/1547/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int xA, yA, xB, yB, xX, yX;
    cin >>xA >> yA >> xB >> yB >> xX >>yX;
    
    int res = abs(xA-xB) + abs(yA- yB);
    
    //Check if 3 in X or Y its equal : missing steps
    
    if( xA == xB && xX == xB || yA == yB && yX == yB){
        
        //Check if stay inside of the range in columns or rows
        if((xX > min(xA, xB) && xX < max(xA,xB)) || (yX > min(yA, yB) && yX < max(yA,yB))){
            res += 2;
        }
        
    }
    
    cout << res <<"\n";
   
return;
}

 
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

return 0;
}