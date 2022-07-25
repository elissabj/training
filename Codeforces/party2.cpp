#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<bool> vis;
int answer = -1;

void dfs(int startNode, int maxDepth){

    vis[startNode] = true;

    if(maxDepth > answer){
        answer = maxDepth;
    }

    // cout << "startNode:" << startNode << endl;

    for(int i = 0; i < tree[startNode].size(); i++){
        int nodeU = tree[startNode][i];
        if(!vis[nodeU]){
            dfs(nodeU, maxDepth+1);
        }
    }
    return;
}

int main (){

    int n; cin>>n;
    tree.resize(n);
    vis.resize(n, false);

    vector<int> roots;

    for(int i = 0; i < n; i++){
        int u; cin>>u;

        if(u == -1){
            roots.push_back(i);
        } else {
            tree[u-1].push_back(i);
        }

    }
    
    /*
    int cont = 0;
    for(auto lista: tree){
        cout << cont << ":\n";
        for(int x: lista){
            cout << x << " "; 
        }
        cout << endl;
        cont++;
    }
    */
    
    for(int root: roots)
        dfs(root, 1);

    cout << answer << endl;

    return 0;
}