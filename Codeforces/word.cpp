//https://codeforces.com/contest/59/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s; 

    int ct_up = 0, ct_low = 0;
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            ct_up++;
        }else{
            ct_low++;
        }
    }

    if(ct_low > ct_up || ct_up == ct_low){
        for(int i = 0; i < s.size(); i++)
            putchar(tolower(s[i]));
        
    }else{
         for(int i = 0; i < s.size(); i++)
            putchar(toupper(s[i]));
        
    }

return 0;
}