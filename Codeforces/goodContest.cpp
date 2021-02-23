//https://codeforces.com/contest/681/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    bool flag = false;
    int n; cin >> n; 

    while(n--){
        string s; int before, after; 
        cin >> s >> before >> after;

        if((before >= 2400) && (after > before)){
            flag = true;
        }
    }

    (flag) ? cout <<"YES\n" : cout <<"NO\n";

return 0;
}