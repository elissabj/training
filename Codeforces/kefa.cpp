#include<bits/stdc++.h>
using namespace std;

int main(){

    long long tam; cin >> tam;
    vector<long long>elements(tam);
    for(long long i = 0; i < tam; i++){
        cin >> elements[i];
    }

    long long ct = 1, res = 1;
    for(long long i = 0; i < tam-1 ; i++){
       if(elements[i+1] >= elements[i]){
           ct++;
           if( ct > res){
               res = ct;
           }
       }else{
           ct = 1;
       }
    }

    cout << res <<"\n";

return 0;
}