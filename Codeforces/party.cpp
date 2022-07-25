// https://codeforces.com/contest/115/problem/A
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

//dfs 
vector<vector<int>> graph(2005);
vector<int>visited(2005, -1);
int res, aux, n;


void miniTotalGroups (int pos, int maxi){

    visited[pos] = 1;  //ya lo visite
    for(int i = 0; i  < graph[pos].size(); i++){
        //cout << visited[graph[pos][i]] <<" " <<maxi <<"\n";
        //if(visited[graph[pos][i]] == -1){  //no lo he vistado entonces visitalo 
            miniTotalGroups(graph[pos][i], maxi+1);
            aux = max(aux, maxi);
        //}
    }

return;
}


int main(){__

   cin >> n;

    //Lista de adyacencia  : idx 0 : vector<vector<int>> graph(n);

    for(int i = 0; i < n; i++){                       
        int possibleManager; cin >>possibleManager;   
        
        if(possibleManager != -1){
            graph[possibleManager-1].push_back(i);
            //graph[i].push_back(possibleManager-1);
        }

    }

    res = -1e6;
    for(int i = 0; i < n ; i++){
        //cout << i <<":\n";
        //if(visited[i] == -1){
            miniTotalGroups(i,1);
            res = max(res, aux);
        //}
    }

    cout << res+1 <<"\n";

return 0; 
}