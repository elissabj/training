//https://codeforces.com/problemset/problem/1092/B
#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n; cin >> n; 

    vector<int> values(n);

    for(int i = 0; i < n; i++){
        cin >> values[i];
    }

    sort(values.begin(), values.end());

    int problems = 0;
    for(int i = 0; i < n; i+= 2){
        problems += values[i+1] - values[i];
    }

    cout << problems <<"\n";

return 0;
}