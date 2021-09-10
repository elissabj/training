//https://omegaup.com/arena/problem/Serie-Fibonacci/#problems
#include<bits/stdc++.h>
using namespace std; 
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<long long int>fiboSec;
int a, b; 

void fibo(int n){

    fiboSec[0] = 1; fiboSec[1] = 1;

    for(int i = 2; i < n; i++){
        fiboSec[i] = fiboSec[i-1] + fiboSec[i-2];
    }
return;
}

int main(){__

    fiboSec.resize(100, 0);
    fibo(100);

    int a, b; 
    cin >> a >> b;

    a = lower_bound(fiboSec.begin(),fiboSec.end(),a)-fiboSec.begin();
    b = lower_bound(fiboSec.begin(),fiboSec.end(),b)-fiboSec.begin();
    
    cout << (b-a)-1 <<"\n";
return 0;
}