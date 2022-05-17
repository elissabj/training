// https://codeforces.com/contest/546/problem/B
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n; 
    vector<int> v(n);
    

    for(int i = 0; i < n; i++){
        cin >> v[i];
    } 

    sort(v.begin(), v.end());
    int ct = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){

            if(v[j] == v[i]){
                ct++;
                v[j]++;
            }
        }
    }

    cout << ct <<"\n";

return 0;
}


/*

1 2 2 3 5
  i 
    j
    3 3 5
        j
    i 4 5
      j
1 2
2 2   ok
2 3   
3 5

2 3 
3 3  ok 
3 5

1 1 3 4 

1 1
1 3 
3 4


*/