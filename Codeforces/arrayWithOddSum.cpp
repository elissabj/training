//https://codeforces.com/problemset/problem/1296/A
#include<bits/stdc++.h>
    using namespace std;
    int main(){
     
      int t;
      cin>>t; int n;
      while(t--){
        cin>>n;
        vector<int> nums(n);
        int sum = 0;
        bool par = false, impar = false;
        for(int i = 0; i < n; i++){
          cin>>nums[i];
          sum += nums[i];
          if(nums[i] % 2 == 0)par = true;
          else impar = true;
        }
     
        if(sum % 2 != 0){
          cout<<"YES\n";
        }else{
     
          if(par && impar) cout<<"YES\n"; else cout<<"NO\n";
     
        }
     
      }
     
     
      return 0;
    }
