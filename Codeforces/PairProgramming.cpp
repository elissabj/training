//https://codeforces.com/problemset/problem/1547/C
#include<bits/stdc++.h>
using namespace std;

void solve(){

    int k, n, m; 
    cin >> k >> n >> m; 

  
    vector<int>sequence;
    vector<int>M(n); vector<int>P(m);

    for(int i = 0; i < n; i++){
        cin >> M[i];
       
    }

    for(int i = 0; i < m; i++){
        cin >> P[i];
        
    }


    int i = 0, j = 0;

    while(i < n && j < m){
        if(M[i] < P[j]){
            if(M[i] <= k){

                if(M[i] == 0){k++;}

                sequence.push_back(M[i]);

            }else{
                cout << "-1\n"; return;
            }

            i++;
        }else{
            if(P[j] <= k){

                if(P[j] == 0){k++;}

                sequence.push_back(P[j]);

            }else{
                cout << "-1\n"; return;
            }

            j++;
        }
    }


    while(i != n){
        if(M[i] <= k){

            if(M[i] == 0){k++;}
            sequence.push_back(M[i]);

        }else{
            cout << "-1\n"; return;
        }

        i++;
    }

    while(j != m){
        if(P[j] <= k){

            if(P[j] == 0){k++;}
            sequence.push_back(P[j]);

        }else{
            cout << "-1\n"; return;
        }
        j++;
    }

    for(int it: sequence){
        cout << it <<" ";
    }
    cout << "\n";
    
return; 
}


int main(){

    int t; cin >> t;

    string blank; 

    while(t--){
        solve();
    } 



return 0;
}