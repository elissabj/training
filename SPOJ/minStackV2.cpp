#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

struct node{
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
};


int main(){
    __
    int n; cin >> n; 
    myStack presents;
    long long int mini = 1e9+1;
    while(n--){
        string s; cin >> s;
        if(s.size() == 4){
            long long int num; cin >> num;
            if(presents.empty()){
                mini = num;
            }else{
                mini = min(num, presents.top());
            }
            presents.push(mini);
        }else{
            if(s[0] == 'M'){
                if(presents.empty()) cout <<"EMPTY\n";
                else{
                    auto a = presents.top();
                    cout <<a<<"\n";
                }
            }else{
                if(!presents.empty()) presents.pop();
                else cout <<"EMPTY\n";
            }
        }
    }
return 0; 
}