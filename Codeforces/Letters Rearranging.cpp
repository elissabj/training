// https://codeforces.com/problemset/problem/1093/B

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s){

    for(int i = 0, j = s.size()-1; i < j; i++,j--){
        if(s[i] != s[j]){
            return false;
        }
    }

return true;
}


void solve(){

    string s; cin >>s; 

    if(s.size() == 1){
        cout << "-1\n";
        return;
    }


    if(isPalindrome(s)){
        
        string change = s;
        sort(change.begin(), change.end());

        if(isPalindrome(change)){
            cout << "-1\n";
        }else{
            cout << change <<"\n";
        }


    }else{
        cout << s <<"\n";
    }

return;
}


int main(){

    int t; cin >> t; 

    while(t--){
        solve();
    }

return 0; 
}