//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3644
#include<bits/stdc++.h>
using namespace std; 

/*void showpq(priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> cola){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> g = cola;
    while (!g.empty()) {
        pair<int, int> aux = g.top();
        cout << aux.first << " " <<aux.second << "\n";
        g.pop();
    }
    cout << '\n';
}*/

int main(){

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> cola_priori;

    map<int, int> dict;

    string s; 
    string a = "#";
    while(cin >> s && s != a){
        int id, seg; cin >> id >> seg;
        cola_priori.push(pair<int, int>({seg, id}));
        dict[id] = seg;

    }

    int n; cin >> n;
    while(n--){
        pair<int, int> aux = cola_priori.top();
        cout << aux.second << "\n";
        cola_priori.pop();

        aux.first += dict[aux.second];

        cola_priori.push(aux);
    }

return 0;
}