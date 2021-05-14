//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3999
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n; 
    vector<string>song = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    vector<string>names(n);

    for(int i = 0; i < n; i++) cin >> names[i];

    if(n <= 16){

        for(int i = 0; i < song.size(); i++){
            cout << names[i%n]<<": "<<song[i]<<"\n";
        }

    }else{
        int i = 0;
        for(; i < names.size(); i++){
            cout << names[i]<<": "<<song[i%16]<<"\n";
        }

        while(i%16 != 0){
            cout << names[i%n]<<": "<<song[i%16]<<"\n";
            i++;
        }
    }

return 0;
}