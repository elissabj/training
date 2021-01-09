//https://codeforces.com/contest/41/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    
    reverse(s.begin(),s.end());
    
    if(s.compare(t) != 0){
        cout << "NO" << endl;
    }else{
        cout <<"YES" << endl;
    }
}
