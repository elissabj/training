#include<bits/stdc++.h>
using namespace std;

int main(){
    string cad;
    getline(cin, cad);

    bool flag = false; 

    int i = 0;
    while(i <= cad.size()){
        if(cad[i]=='H' || cad[i]=='Q' || cad[i]=='9'){
            flag = true; break;
        }
        i++;
    }
     if(flag){
         cout <<"YES\n";
     }else{
         cout <<"NO\n";
     }
return 0;
}