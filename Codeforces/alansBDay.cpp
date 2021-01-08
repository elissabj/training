//https://codeforces.com/gym/102218/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long tam; cin >> tam;
    string cad; cin >> cad;


    map<char, int> order_letters;
    for(int i = 0; i < tam; i++){
        order_letters[cad[i]]++;
    }

    for(auto value: order_letters){
        long long times = value.second;
        while(times--){
            cout << value.first;
        }
    }
cout <<"\n";
return 0;
}