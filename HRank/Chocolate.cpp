#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

ll powe (int x, int times){

    ll f = 1;

    while(times--){

        //cout <<f<< " " << times<<"\n";

        f = (f * 2) % 1000000007;
    }

    //cout << "\n";

return f;
}

tuple<ll, ll, ll> extendedGcd(ll a, ll b){
	if(b == 0){
		if(a > 0) return {a, 1, 0};
		else return {-a, -1, 0};
	}else{
		auto[d, x, y] = extendedGcd(b, a%b);
		return {d, y, x - y*(a/b)};
	}
}

ll modularInverse(ll a, ll m){
	auto[d, x, y] = extendedGcd(a, m);
	if(d != 1) return -1; // inverse doesn't exist
	if(x < 0) x += m;
	return x;
}

ll powerMod(ll b, ll e, ll m){
	ll ans = 1;
	b %= m;
	if(e < 0){
		b = modularInverse(b, m);
		e = -e;
	}
	while(e){
		if(e & 1) ans = ans * b % m;
		e >>= 1;
		b = b * b % m;
	}
	return ans;
}

ll multMod(ll a, ll b, ll n){
	ll ans = 0;
	a %= n, b %= n;
	if(abs(b) > abs(a)) swap(a, b);
	if(b < 0){
		a = -a, b = -b;
	}
	while(b){
		if(b & 1) ans = (ans + a) % n;
		b >>= 1;
		a = (a + a) % n;
	}
	return ans;
}


ll validSubsets (vector<int>& v){

    ll res = 0;
    int ctP = 0, ctI = 0;

     for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0){
            ctP++;
        }else{
            ctI++;
        }
    }

    ll a = powerMod(2,ctP, 1000000007);

    // cout << a<< " , ";

    //  a = powe(2,ctP);
    // cout << a<< " , ";
    
	if(ctI <= 0){
		ctI = 1;
	}

    ll b = powerMod(2, ctI-1, 1000000007);
    //cout << b<< " , ";

    res = (multMod(a,b,1000000007)-1) % 1000000007;
    

return res;
}


int main(){

    int n; cin >> n; 
    vector<int>v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << (ll)validSubsets(v) << "\n";

return 0;
}