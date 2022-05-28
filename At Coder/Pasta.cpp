// https://atcoder.jp/contests/abc241/tasks/abc241_b

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  
  int N, M; 
  cin  >> N >> M;

  map<ll, int>consulta;
  ll aux; 

  for(int i = 0; i < N; i++){
    cin >> aux;
    consulta[aux]++;   
  }
  

  bool sePuede = true;
  
  for(int i = 0; i < M; i++){
    cin >> aux;
    if(consulta.count(aux)){   
      if(consulta[aux] > 0){     
        consulta[aux]--;         
      }else{
        sePuede = false;              
        break;
      }
			
    }else{
      sePuede = false;
      break;
    }
  }
  
  cout << (sePuede? "Yes\n":"No\n");
  
  
return 0;
}