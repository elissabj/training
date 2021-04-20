//https://www.spoj.com/problems/STACKEZ/
#include <iostream>  
#include <stack>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);
/*struct node{
    long long int c;
    node *sig;
};

struct myStack{
    node * tope = nullptr;
    int tam = 0;

    bool empty(){
        if(tam == 0) return true;
        return false;
    }

    long long int top(){
        return tope->c;
    }

    void push (long long int a){
        tam++;
        node *nuevoNodo = new node();
        nuevoNodo->c = a;

        if(tope == nullptr){
            tope = nuevoNodo;
        }else{
            node *nodoDesplazar = tope;
            tope = nuevoNodo;
            tope->sig = nodoDesplazar;
        }
        return;
    }

    void pop(){
        if(tope == nullptr) return;
        tam--;
        node *nodoBye = tope;
        tope = tope->sig;
        delete nodoBye;

        return;
    }
};*/

int main(){
    __
    int t; cin >> t; 
    stack<long long int>ope;
    while(t--){
        int s; cin>>s;
        if(s == 1){
            long long int num; cin >> num;
            ope.push(num);
        }else if (s == 2){
            if(!ope.empty()) ope.pop();
        }else if (s == 3){
            if(ope.empty()) cout << "Empty!\n";
            else cout<< ope.top() <<"\n";
        }
    }
return 0;
}