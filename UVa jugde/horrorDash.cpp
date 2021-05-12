//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2899
#include<bits/stdc++.h>
using namespace std;

int main(){

    int ct = 1, t; 
    cin >> t; 

    while(t--){

        int n; cin >> n;
        int num, speedMax = -1e6;

        for(int i = 0; i < n; i++){
            cin >> num;
            speedMax = max(speedMax, num);
        }

        cout << "Case " <<ct <<": "<<speedMax<<"\n";
        ct++;
    }

return 0;
}