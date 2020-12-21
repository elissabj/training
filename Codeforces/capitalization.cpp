#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str;
    cin >> str;

    char aux = str[0];
    putchar(toupper(aux));
    str = str.substr(1);

    cout << str <<"\n";

return 0 ;
}