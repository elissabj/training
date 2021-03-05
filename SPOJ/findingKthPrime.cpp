//https://www.spoj.com/problems/TDKPRIME/
#include<bits/stdc++.h>
using namespace std;

bool criba[100000002];
int primos[50000002];
int tam;

void pre()
{
    tam++;
    primos[tam]=2;
    for(int i= 4; i<= 100000000; i +=2) criba[i]= true;
    for(long long int  i= 3; i<= 100000000; i +=2){
        if(!criba[i]){
            primos[++tam] = i;
            for(long long int j= i*i; j<=100000000; j += (2*i)){
                criba[j]= true;
            }
    
        }
    }
}

int main(){
    pre();
    int q;
    cin >> q;
    
    while(q--){
        int aux;
        cin >> aux;
        cout<< primos[aux] << endl;
    }

return 0;
}