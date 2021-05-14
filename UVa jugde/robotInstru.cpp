//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3947
#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n, ans = 0; 
    
    cin >> n;
    
    vector<int> instru;
    while(n--){
        string ins; cin >> ins;
        
        if(ins[0] == 'S'){
            string aux; cin >> aux;
            int num; cin >> num;
            instru.push_back(num);
        }else if(ins[0] == 'L')
            instru.push_back(-1);
        else 
            instru.push_back(0);
    }
    

    for(int i = 0; i < instru.size(); i++){ 
       
       if(instru[i] == 0){
           ans++;
       }else if (instru[i] == -1){
           ans--;
       }else{
           int pos = instru[i];
           if(instru[pos-1] == 0){
               ans++;
               instru[i] = instru[pos-1];
           }else{
               ans--;
               instru[i] = instru[pos-1];
           } 
       }
    }

    cout << ans <<"\n";
return;
}

int main(){

    int t; cin >> t;

    while(t--){
        solve();
    }
return 0; 
}