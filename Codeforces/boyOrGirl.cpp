#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<char, int> dict;
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        dict[s[i]]++;
    }

    if(dict.size() % 2 == 0){
        cout << "CHAT WITH HER!\n";
    }else{
        cout << "IGNORE HIM!\n";
    }

return 0;
}