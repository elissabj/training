//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1361
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    map<string, int> beauties;
    while(n--){
        string country, name;
        cin>>country; cin.ignore(); getline(cin,name);
        beauties[country]++; 
    }

    for(auto it: beauties){
        cout << it.first<<" "<<it.second<<"\n";
    }


return 0;
}