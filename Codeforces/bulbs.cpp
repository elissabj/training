//https://codeforces.com/contest/615/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m; 
    cin >> n >> m;
    int arr[m] = {'\0'};

    while(n--){
        int n_but, aux;
        cin >> n_but;
        while(n_but--){
            cin >> aux;
            arr[aux-1] = 1;
        }
    }
    
    bool flag = true;
    for(int i = 0; i < m; i++){
        if(arr[i] != 1){
            flag = false; break;
        }
    }

    (flag) ? cout<<"YES\n" : cout<<"NO\n";

return 0;
}