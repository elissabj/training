#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);


int main(){__

    ll n;
    cin >> n;

    vector<ll> nums(n,0);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    ll findNum = nums[0];

    sort(nums.begin(), nums.end());

    ll pos = lower_bound(nums.begin(), nums.end(), findNum) - nums.begin();

    cout << pos <<"\n";



return 0; 
}