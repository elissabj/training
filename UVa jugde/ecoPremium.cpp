//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1241
#include<iostream>
using namespace std;

void solve(){

    int n, meters, num_animals, ecofriend, acum_sum = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> meters >> num_animals >> ecofriend;
        acum_sum += (meters*ecofriend*num_animals)/num_animals;
    }

    cout << acum_sum <<"\n";
}

int main(){

    int t; 
    cin >> t;

    while(t--){
        solve();
    }

return 0;
}