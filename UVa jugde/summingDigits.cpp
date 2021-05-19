//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=2307
#include<bits/stdc++.h>
using namespace std;
int val;

int solve(string &s){

    if(s.size() == 1){
        val = stoi(s);
        return val;
    }

    val = 0;
    for(int i = 0; i < s.size(); i++){
        val += s[i]-'0';
    }
   
    s = to_string(val);
    return solve(s);
}


int main(){

    string num; 
    while(cin >> num && num[0] != '0'){
        cout << solve(num) <<"\n";
    }

return 0;
}