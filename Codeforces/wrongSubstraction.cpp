//https://codeforces.com/contest/977/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long num;int k_times;
    
    cin >> num >> k_times;
 
        for(int i = 0; i < k_times; i++){
            if(num % 10 == 0){num = num/10;
            }else{
            num = num-1;}
        }
        
    cout << num <<endl;
return 0;
}
