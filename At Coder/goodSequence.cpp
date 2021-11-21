//https://atcoder.jp/contests/arc087/tasks/arc087_a
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

int main(){__

    int n; cin >> n;

    map<ll, ll> data;
    ll minRemove = 0;

    for(int i = 0; i < n; i++){
        ll num; cin >> num;
        data[num]++;
    }

    for(auto it: data){
        if(it.first > it.second){
            minRemove += it.second;
        }else if(it.first < it.second){
            minRemove += (it.second-it.first);
        }
    }

    cout << minRemove <<"\n";

return 0;
}