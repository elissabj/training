#include<bits/stdc++.h>
using namespace std;

void solve(int & n){

    if(n == 1){
        cout << "Discarded cards:";
        cout <<"\nRemaining card: 1\n";
        return;
    }
    if(n == 2){
        cout << "Discarded cards: 1";
        cout <<"\nRemaining card: 2\n";
        return;
    }
    queue<int> cards;

    for(int i = 1; i <= n; i++){
        cards.push(i);
    }

    int newFront = 0, last = 0;
    bool itsFirst = true;
    cout << "Discarded cards:";


    while(!cards.empty()){
        newFront = cards.front();        
        if(itsFirst){
            if(cards.size()==2){
                cout <<", " << newFront; break;
            }
            if(cards.size() == n){
                cout <<" " << newFront;
            }else{
                cout <<", " << newFront;
            }
            itsFirst = false;
        }else{
            if(cards.size()==2){
                last = newFront;
            }
            cards.push(newFront);
            itsFirst = true;
        }

        cards.pop();
    }
    
    cout <<"\nRemaining card: "<<last;

    cout <<"\n";
    
return; 
}

int main(){

    int n; 
    while(cin >> n && n != 0){
        solve(n);
    }

return 0;
}