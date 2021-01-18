//https://codeforces.com/problemset/problem/381/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main (){
    
    int n; cin>>n;
    deque<int> cards;
    for(int i = 0; i < n; i++){
        int x; cin>>x;
        cards.push_back(x);
    }
    
    /*for(int x: cards){
        cout << x << " ";
    }*/
    
    int turn = 1;
    int sereja = 0;
    int dima = 0;
    while(!cards.empty()){
        int front = cards.front();
        int back = cards.back();
        int res;
        if(front > back){
            res = front;
            cards.pop_front();
        } else {
            res = back;
            cards.pop_back();
        }
        
        if(turn == 1){
            sereja += res;
            turn = 0;
        } else {
            dima += res;
            turn = 1;
        }
    }
    
    cout << sereja << " " << dima << "\n";
return 0;
}
