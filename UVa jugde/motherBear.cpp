//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=615&page=show_problem&problem=1886
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    string aux = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            aux+=s[i];
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            char c = tolower(s[i]); aux+=c;
        }
    }

    for(int i = 0, j = aux.size()-1; i < j; i++,j--){
        if(aux[i] != aux[j]) return false;
    }

return true;
}


int main(){

    string sentence;
    while(getline(cin,sentence) && sentence != "DONE"){
        (isPalindrome(sentence))? cout <<"You won't be eaten!\n":cout<<"Uh oh..\n";
    }

return 0;
}