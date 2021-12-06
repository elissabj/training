#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<vector<int>> graph(5002);
vector<int> visited(5002);
vector<int> cycle(5002);
int aux, n;


bool haveLoveTriangle (int curr, int &prev, int ct){

    if(visited[curr] == -1){
        aux = max(aux, ct);
        visited[curr] = 1;  
        cycle[curr] = 1;

        

        for(int i = 0; i < graph[curr].size(); i++){
            if(graph[curr][i] == prev){return true;}
            if(visited[graph[curr][i]] == -1 && haveLoveTriangle(graph[curr][i], prev,ct+1)){
                return true;
            }else if(cycle[graph[curr][i]] == 1 ){
                if(graph[curr][i] == prev)
                    return true;
            }
        }
    }

    cycle[curr] = -1;

return false;
}


int main(){__

    cin >> n; 


    for(int i = 0; i < n; i++){
        int loveWith; cin >>loveWith;
        graph[i].push_back(loveWith-1);
    }

    
    for(int i = 0; i < n ; i++){
        cycle.assign(cycle.size(),-1);
        visited.assign(visited.size(),-1);
        aux = -1e6;
         //cout <<haveLoveTriangle(i,i,1)<<"\n";
        if(haveLoveTriangle(i,i,1) && aux == 3){
            cout << "YES\n"; return 0;
        }
    }

    cout << "NO\n";

return 0; 
}