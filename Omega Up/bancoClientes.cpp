// https://omegaup.com/arena/problem/banco-clientes-no-preferentes 

#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string>s;
    queue<string>q;

    int n; cin >> n;

    for(int i = 0 ; i < n; i++){
        char aux; cin >> aux;
        int inWhich; cin >> inWhich;

        if(aux == 'E'){
            string name; cin >> name;
            if(inWhich == 1){
                q.push(name);
            }else{
                s.push(name);
            }
        }else{
            if(inWhich == 1){
                cout << q.front()<< endl;
                q.pop();
            }else{
                cout << s.top()<< endl;
                s.pop();
            }
        }
    }

    
return 0;
}