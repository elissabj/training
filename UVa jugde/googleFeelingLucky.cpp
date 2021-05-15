//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3166
#include<bits/stdc++.h>
using namespace std;

void solve(int &ct){

    int n = 9, prev_rate, curr_rate; 
    string str; 
    vector<string>topPages;

    cin >> str >> prev_rate;
    topPages.push_back(str);

    while(n--){
        cin >> str >> curr_rate;
    
        if(curr_rate > prev_rate){
            topPages.erase(topPages.begin()+topPages.size());
            topPages.push_back(str);
        }else if(curr_rate == prev_rate){
            topPages.push_back(str);
        }

        prev_rate = max(curr_rate, prev_rate);
    }

    cout <<"Case #"<< ct <<":\n";

    for(auto it: topPages){
        cout << it <<"\n";
    }

return;
}


int main(){

    int t, ct = 1; cin >> t; 
    while(t--){
        solve(ct);
        ct++;
    }
return 0;
}