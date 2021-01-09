//https://codeforces.com/problemset/problem/155/B
#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n; cin>>n;
    vector<pair<int, int>> cards;
    for(int i = 0; i < n; i++){
        int a, b; cin>>a>>b;
        cards.push_back({b, a});
    }
    
    sort(cards.begin(), cards.end());

    int cont = 1;
    int id = n-1; int a = 0;
    while (cont >= 1){
        auto x = cards[id];
        a += x.second;
        cont += (x.first-1);
        id--;
        if(id == -1)break;
        
    }
    cout << a << "\n";
    return 0;
}
