//https://codeforces.com/problemset/problem/1560/A

#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    
    vector<int>polySequence;
    
    for(int i = 1; i < 1e6; i++){
        if(i%3 != 0 && i%10 != 3){
            polySequence.push_back(i);
        }
    }
    
    int t, pos; 
    cin >> t;
    
    while(t--){
        cin >>pos;
        cout <<polySequence[pos-1] <<"\n";
    }
 
return 0;
}