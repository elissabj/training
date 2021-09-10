/*https://omegaup.com/arena/problem/DesEdificios/#problems*/
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

void res(vector<long long int> &v){

  stack<long long int>check;
  long long int maxArea = 0;
  long long int i = 0;
  for(; i < v.size();){
  	
    if(check.empty() || v[check.top()] <= v[i]){
    	check.push(i); i++;
    }else{
    	
      long long int aux = check.top();
      check.pop();
      
      aux = v[aux] * (check.empty()? i: i-1-check.top());
      maxArea = max(maxArea , aux);
    }  
  }

  while(!check.empty()){
  	 long long int aux = check.top();
      check.pop();
      
      aux = v[aux] * (check.empty()? i: i-1-check.top());
      maxArea = max(maxArea , aux);
  
  }
    cout << maxArea <<"\n";
}


int main(){
  __
  long long int n; cin >> n;
  
  vector<long long int>valores(n);
  
  for(auto &x: valores) cin >> x;
  
  res(valores);
 
return 0;
}
