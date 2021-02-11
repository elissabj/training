//https://codeforces.com/contest/903/problem/C
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    map<long long int, long long int> values;

    for(int i = 0; i < n; i++){
        long long int aux; cin >> aux;
        values[aux]++;
    }

   
   long long int elem_max = 1;

    for(auto It = values.begin(); It != values.end(); It++){
        elem_max= max (elem_max, It->second);
    }

    cout << elem_max <<"\n";


return 0;
}

