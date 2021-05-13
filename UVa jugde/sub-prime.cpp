//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726
#include<bits/stdc++.h>
using namespace std;

void solve (int &b, int &n){

    vector<int>reserves(b+1, -1);
    for(int i = 1; i <= b; i++) cin >> reserves[i];

    bool canPay = true;
    int d, c, v;

    while(n--){
        cin >> d >> c >> v;
        reserves[d] -= v;
        reserves[c] += v;
    }

    for(int i = 1; i <= b; i++){
        if(reserves[i] < 0){
            canPay = false; break;
        }
    }

    (canPay) ? cout <<"S\n": cout <<"N\n";

return;
}


int main(){

    int b, n;
    while(cin >> b >> n && b != 0 && n != 0){
        solve(b,n);
    }

return 0;
}