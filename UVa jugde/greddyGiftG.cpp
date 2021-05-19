//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=55
#include<bits/stdc++.h>
using namespace std;
int ct = 1; 

void solve(int &n){

    vector<string>names(n);
    map<string, int> money;
    for(int i = 0; i < n; i++){
        cin >> names[i];
        money[names[i]] = 0;
    }
    
    for(int i = 0; i < n; i++){
        string give, aux; long long int have, num_people, add;
        cin >> give >> have >> num_people;
        if(num_people == 0) continue;
        add = have/num_people;
        money[give] += 0-(add*num_people);
        for(long long int j = 0; j < num_people; j++){
            cin >> aux; 
            if(money[aux]) money[aux] += add;
            else money[aux] = add;
        }
    }
   

    for(int i = 0; i < n; i++){
        if(ct == 1 && i == 0){cout << names[i] <<" "<< money[names[i]]; continue;}
        cout <<"\n" << names[i] <<" "<< money[names[i]];
    }

return;
}

int main(){

    int n;
    while(cin >> n){
        solve(n); cout <<"\n"; ct++;
    }

return 0;
}