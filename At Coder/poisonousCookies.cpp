//https://atcoder.jp/contests/agc030/tasks/agc030_a?lang=en
#include<bits/stdc++.h>
using namespace std; 



int main(){    
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int maximo = 0;
    
    if((a+b+1) >= c){
        maximo = b+c; //comes todas las galletas
    }else{
        maximo = (a+b+b+1);
    }
    
    cout << maximo << endl;
    
    return 0;
    
}