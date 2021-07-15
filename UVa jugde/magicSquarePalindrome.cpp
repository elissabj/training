//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=615&page=show_problem&problem=2162
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    for(int i = 0, j = s.size()-1; i < j; i++,j--){
        if(s[i] != s[j]){
            return false;
        }
    }
return true;
}

void solve(string &s){

    string aux;
    for(int i = 0; i < s.size();i++){
        if((s[i]>= 'a' && s[i] <= 'z')|| (s[i]>= 'A' && s[i] <= 'Z')){
            char c = tolower(s[i]); aux += c;
        }
    }
    double square = sqrt(aux.size());

    if(isPalindrome(aux) && (square-int(square) == 0.0)){
        cout << int(square)<<"\n";
    }else{
        cout <<"No magic :(\n";
    }
return;
}

int main(){

    int t, ct = 1;
    string sentence; 
    
    cin >>t;
    cin.ignore();
    
    while(t--){
        getline(cin, sentence);
        cout <<"Case #"<<ct<<":\n";
        
        solve(sentence);
        ct++;
    }

return 0;
}