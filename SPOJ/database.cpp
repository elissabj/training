//https://www.spoj.com/problems/RPLD/
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
int t, n, r, k, c, ct; 
string s;

void solve(){
    ct++;
    cin >> n >> r;

    bool itsPossible = true;
    map<pair<int,int>, int> data;
    
    for(int i = 0; i < r; i++){
        cin >> k >> c; 
        if(data[{k,c}]){
            itsPossible = false;
        }else{
            data[{k,c}] = 1;
        }
    }

    cout <<"Scenario #"<<ct;
    (itsPossible)? cout <<": possible\n": cout <<": impossible\n";

return;
}


int main(void){__
    
   cin >> t;
   while(t--){
       solve(); 
   }

return 0;
}

    
   