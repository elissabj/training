//https://omegaup.com/arena/problem/herdsums#problems
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n, formas = 1; cin >> n; 

    if (n == 0) formas = 0;

    long long int sum_actual = 3;
    for(long long int i = 1, j = 2; j < n;){
       if(sum_actual < n){
           j++;
           sum_actual += j;
       }else if (sum_actual > n){
           sum_actual -= i;
           i++;
       }else{
           formas++;
           sum_actual -= i;
           i++;
       }

    }

    cout << formas << "\n";

return 0;
}