//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3309
#include<bits/stdc++.h>
using namespace std;

void solve(int &ct){

    int n, seconds, acumM = 0, acumJ = 0;
    
    cin >> n;
    while(n--){

        cin >> seconds;

        acumM += (seconds / 30) * 10 + 10;
        acumJ += (seconds / 60) * 15 + 15;
    }

    cout <<"Case " << ct;

    if(acumM < acumJ){
        cout <<": Mile " << acumM <<"\n";
    }else if (acumM == acumJ){
        cout <<": Mile Juice " << acumM <<"\n";
    }else{
        cout <<": Juice " << acumJ <<"\n";
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