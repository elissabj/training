//https://acm.timus.ru/problem.aspx?space=1&num=1100
#include<bits/stdc++.h>
using namespace std; 

int main(){    
   
    long long n;
    cin >> n;
    
    multimap <long long, long long, greater<long long>>numeros;
    
    while(n--){
        long long a, b;
        cin >> a >> b;
        numeros.insert(make_pair(b,a));
    }
    
    for(auto x: numeros){
        cout << x.second <<" " <<x.first <<endl;
    }
    
    return 0;
}