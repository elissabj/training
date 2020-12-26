#include<bits/stdc++.h>
using namespace std;

int main(){
    string cad;
    cin >> cad; 

    bool flag = true;

    for(int i = 0; i < cad.size(); i++){
        if(cad[i]=='W' && cad[i+1]=='U' && cad[i+2]=='B'){
            i += 2;
            if(!flag){cout <<" ";}
        }else{
            flag = false;
            cout << cad[i];
        }
           
    }
cout <<"\n";
return 0;
}