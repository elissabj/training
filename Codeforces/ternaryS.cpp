//https://codeforces.com/problemset/problem/1354/B
#include<bits/stdc++.h>
using namespace std;
            
bool isComplete(int b[3]){
	for(int i = 0; i < 3; i++){
  	    if(b[i] == 0) return false;
    }
return true;
}

bool have3(string &s){
    set<int>dif;
	for(int i = 0; i < s.size(); i++){
        dif.insert(s[i]-'0');
    }

    if(dif.size() != 3)return false;
return true;
}

int solve (string &s){

    if(have3(s)){

        int bucket[3] = {'\0'};
        int ini = 0, fin = 1, size_min = 1e6, curr = 0;
        
        bucket[(s[ini]-'0')-1]++; curr++;
        bucket[(s[fin]-'0')-1]++; curr++;


        while(fin < s.size()){
            if(!isComplete(bucket)){
                fin++; curr++;
                bucket[(s[fin]-'0')-1]++;
            }else{
                size_min = min(size_min, curr);
                bucket[(s[ini]-'0')-1]--; curr--;
                ini++;
            }
        } 

        return min (size_min, curr);
    }

    return 0;
	
}      
            
int main(){
  
  int t; cin >> t; 
  while(t--){
  	string s; cin >> s;
    cout << solve(s) <<"\n";
  }

return 0;
}
           