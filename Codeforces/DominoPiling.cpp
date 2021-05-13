//https://codeforces.com/contest/50/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    double m ,n;
    cin >> m >> n;
    double res = 0;
    res = ((m*n) - 1)/2;
     if(res - int(res) == 0.5)res +=0.5; 
    cout << res <<  endl;
return 0;
}
 
