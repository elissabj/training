//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=342
#include<bits/stdc++.h>
using namespace std; 

map<char, char> dict;

bool isMP (string s){

   for(int i = 0, j = s.size()-1; i < j+1; i++,j--){
        if(s[i] == s[j] && dict[s[i]] == s[j]){
            continue; 
        }else{
            return false;
        }
    }
return true;
}

bool isM(string s){

     for(int i = 0, j = s.size()-1; i < j+1; i++,j--){
         if(dict[s[i]] != s[j]){
             return false;
         }
     }
return true;
}

bool isP(string s){

     for(int i = 0, j = s.size()-1; i < j+1; i++,j--){
         if(s[i] != s[j]){
             return false;
         }
     }
return true;
}

int main(){

    dict['A'] = 'A'; dict['E'] = '3'; dict['H'] = 'H'; 
    dict['I'] = 'I'; dict['J'] = 'L'; dict['L'] = 'J';
    dict['M'] = 'M'; dict['O'] = 'O'; dict['S'] = '2'; 
    dict['T'] = 'T'; dict['U'] = 'U'; dict['V'] = 'V';
    dict['W'] = 'W'; dict['X'] = 'X'; dict['Y'] = 'Y';
    dict['Z'] = '5'; dict['1'] = '1'; dict['3'] = 'E';
    dict['2'] = 'S'; dict['5'] = 'Z'; dict['8'] = '8'; 

    string s; 
    while (cin >> s){
        if(isMP(s)){
            cout << s <<" -- is a mirrored palindrome.\n\n";
        }else if (isM(s)){
            cout << s <<" -- is a mirrored string.\n\n";
        }else if (isP(s)){
            cout << s <<" -- is a regular palindrome.\n\n";
        }else{
            cout << s <<" -- is not a palindrome.\n\n";
        }
    }

return 0;
}