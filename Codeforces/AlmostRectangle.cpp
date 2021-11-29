//https://codeforces.com/problemset/problem/1512/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n; cin >> n; 
    char matrix[n][n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    vector<pair<int,int>> possiblePos;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == '*'){
                possiblePos.push_back({i,j});
            }
        }
    }
    /*
    Caso que lo mata 
    2      3
    .*     *.*
    .*     ...
           ...
    
    1,2
    2,2
    
    tengo los mismos puntos 
    
    2,3
    3,3 mod n
    
    0,1     1 2
          1 A *
          2 _ *
          
    1,1     1 2
          1 * *
          2 A *
            
    
    
    */
    
    //Parche caso 2
    possiblePos.push_back(possiblePos[0]);
    possiblePos.push_back(possiblePos[1]);
    
    for(int i = 0; i < possiblePos.size(); i+=2){
        auto p1 = possiblePos[i];
        auto p2 = possiblePos[i+1];
        
        int x, y; 
        //toDraw
        
        //parche caso 1
        if(p1.first == p2.first){
            p1.first++;
            p2.first++;
        }else if (p1.second == p2.second){
            p1.second++;
            p2.second++;
        }
        
        x = p1.first%n;
        y = p2.second%n;
        
        matrix[x][y] = '*';
        
        x = p2.first%n;
        y = p1.second%n;
        
        matrix[x][y] = '*';
        
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j];               
        }
        cout <<"\n";
    }
    
return;
}

 
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

return 0;
}