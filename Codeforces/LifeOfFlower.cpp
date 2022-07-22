// https://codeforces.com/problemset/problem/1585/A
#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n; cin >> n; 
    vector<int>days(n,-1);

    for(int i = 0; i < n; i++){
        cin >> days[i];
    }

    int flowerSize = 1;

    for(int i = 0; i < n; i++){
        if(days[i] == 1){
            if((i+1 > 1) && days[i-1] == 1){
                flowerSize += 5;
            }else{
                flowerSize++;
            }
        }else{
            if(i > 0){
                if(days[i-1] == 0){
                    flowerSize = -1; break;
                }
            }
        }
    }

    cout << flowerSize <<"\n"; 

return;
}


int main(){

    int t; cin >> t;
    while(t--){
        solve();
    } 


return 0;
}