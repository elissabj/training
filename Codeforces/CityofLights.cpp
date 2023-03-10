//https://codeforces.com/gym/102465/problem/A
#include<bits/stdc++.h>
using namespace std;

bitset<1000002> lights;

int main(){

    int n,k, val, maxi = INT_MIN, curr = 0; 
    cin >> n >> k;


    while(k--){

        cin >> val;

        for(int i = val; i <= n; i += val){
            lights[i] = (lights[i] == 1? 0: 1);
        }
        
        curr = lights.count();
        maxi = max(maxi, curr);
    }
    
    cout<< maxi <<"\n";

return 0;
}