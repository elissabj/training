#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);


int main(){__

    string s;
    getline(cin, s);


    for(int i = 0; i < s.size(); i+= 2){
        if(s[i] == '0'){
            s[i] = '1';
        }else if(s[i] == '1'){
            s[i] = '0';
        }
    }

    cout << s <<"\n";

return 0; 
}