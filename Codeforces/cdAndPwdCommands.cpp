//https://codeforces.com/contest/158/problem/C
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

void createPath( vector<string> &path, string &param){
    string aux = "";
    for(int i = 0; i < param.size(); i++){
        if(param[i] == '.'){
            if(!path.empty())path.pop_back();
            i += 2;
        }else if (param[i] == '/'){
            path.push_back(aux);
            aux = "";
        }else{
            aux += param[i];
        }
    }
               
    if(!aux.empty()) path.push_back(aux);
return;
}

int main(){ __

    int t; cin >> t;
    cin.ignore();

    vector<string> path;

    while(t--){
       string command; cin >> command;
       if(command[0] == 'c'){
           string param; cin >> param;
           if(param[0] == '/'){
               path.clear();
               createPath(path, param);
           }else{
               createPath(path, param);
           }

       }else{

        cout <<"/";
        for(string x: path){
            if(x.size() != 0) cout << x <<"/";
        }
        cout <<"\n";
       
       }

    }

return 0;
}