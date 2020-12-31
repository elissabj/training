//https://codeforces.com/group/j1UosVRZar/contest/287776/problem/A
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin>>n;
    int cont = 0;
    while(n--){
        long long a, b;
        cin>>a>>b;
        
        cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1 << endl;
        
    }   
    return 0;
}
