//https://codeforces.com/contest/363/problem/B
#include <bits/stdc++.h>
using namespace std;

int posMin(vector<int> &arr, int &n, int &k){
    int min_sum = 1e6, current_sum = 0, ini = 0, fin = k;
    int pos = 0;
    
    for(int i = 0; i < k; i++){
        current_sum += arr[i];
    }

    min_sum = current_sum;

    for(int ini = 0, fin = k; fin < arr.size(); ini++, fin++){
      current_sum -= arr[ini];
      current_sum += arr[fin];
      if(current_sum < min_sum){
            pos = ini+1;
            min_sum = current_sum;
      }
    }
    return pos+1;
}
 

int main()
{
    int n, k; 
    
    cin >> n >> k; 
    vector<int>v(n); 
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout <<posMin(v, n, k)<<"\n";
    return 0;
}