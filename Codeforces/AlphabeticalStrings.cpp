//https://codeforces.com/contest/1547/problem/B

#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);
typedef long long int ll;

bool check (string &s){
    
    string alpha = ("abcdefghijklmnopqrstuvwxyz");
    for(int i = 0; i < s.size(); i++){
        if(s[i] != alpha[i]){
            return false;
        }
    }

return true;
}


void solve(){
    
    string s; cin >>s;
    
    string finalResult = "";
    
    if(check(s)){
        cout<<"YES\n"; return;
    }
    
    size_t findA = s.find("a");
    
    int left = findA, right = findA+1;
    
    while(left >= 0 && right <= s.size()-1){
        if(s[left] < s[right]){
            finalResult += s[left];
            left--;
        }else{
            finalResult += s[right];
            right++;
        }
    }
    
    while(left >= 0){
        finalResult += s[left];
        left--;
    }
    
    while(right <= s.size()-1){
       finalResult += s[right];
        right++;
    }

    cout<< (check(finalResult)? "YES\n":"NO\n");
   
return;
}

 
int main(){__
    
    ll t;
    cin >> t;
    
    while(t--){
        solve();
    }

return 0;
}