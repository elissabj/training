//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=562
#include<iostream>
#include<string>
using namespace std;

void solve (){

    string encrypt; 
    cin >> encrypt;

    if(encrypt[encrypt.size()-1] == '5' && encrypt[encrypt.size()-2] == '3'){
        cout <<"-\n";
    }else if (encrypt[0] == '9' && encrypt[encrypt.size()-1] == '4'){
        cout <<"*\n";
    }else if (encrypt[0] == '1' && encrypt[1] == '9' && encrypt[2] == '0'){
        cout <<"?\n";
    }else if (encrypt.size() == 1){
        if(encrypt[0] == '1' || encrypt[0] == '4') cout <<"+\n";
        else cout <<"?\n";
    }else{
        if(encrypt.size() == 2){
            if(encrypt[0] == '7' || encrypt[1] == '8') cout <<"+\n";
            else cout <<"?\n";
        }else cout <<"?\n";
    }


}

int main(){

    int t; 
    cin >> t; 

    while(t--){
        solve();
    }

return 0;
}
