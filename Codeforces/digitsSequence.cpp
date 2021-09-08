//https://codeforces.com/problemset/problem/1177/A
#include<bits/stdc++.h>
using namespace std; 
 
int main(){    
    
   string s; 
   for(int i = 1; i < 100000; i++){
        s += to_string(i);
    }
 
    long long pos;
    cin >> pos;
    
    cout<<s[pos-1]<<endl;
    
    
    
    return 0;
}