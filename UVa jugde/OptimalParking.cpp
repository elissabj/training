#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin >> t; 

    while(t--){
        int n; cin >> n; 

        int temp, maxi = -1e6, mini = 1e6;
        for(int i = 0; i < n; i++){
            cin >> temp;

            maxi = max(maxi, temp);
            mini = min (mini, temp);
        }

        cout << (maxi - mini)*2 <<"\n";
    }

return 0; 
}