//https://codeforces.com/problemset/gymProblem/101028/B
#include<bits/stdc++.h>
using namespace std;

bool solve(){
    string a, b; cin >> a >> b;

    if(a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
        if(a[i] == 'p' || a[i] == 'P' || a[i] == 'b' || a[i] == 'B'){
            a[i] = 'b';
        }
        if(a[i] == 'i' || a[i] == 'I' || a[i] == 'e' || a[i] == 'E'){
            a[i] = 'e';
        }
    }

    for(int i = 0; i < b.size(); i++){
        b[i] = tolower(b[i]);
        if(b[i] == 'p' || b[i] == 'P' || b[i] == 'b' || b[i] == 'B'){
            b[i] = 'b';
        }
        if(b[i] == 'i' || b[i] == 'I' || b[i] == 'e' || b[i] == 'E'){
            b[i] = 'e';
        }
    }

    if(a.compare(b) != 0){
        return false;
    }
return true;
}


int main(){

    int t; cin >> t;
    while(t--){
        if(!solve()){
            cout <<"No\n";
        }else{
            cout <<"Yes\n";
        }
    }
 
return 0;     
}
