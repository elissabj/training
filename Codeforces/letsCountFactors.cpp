//https://codeforces.com/gym/102966/problem/L
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);

set<lli> f;

lli nextInt() {
    lli x = 0, p = 1;
    char c;
    do {
        c = getchar();
    } while (c <= 32);
    if (c == '-') {
        p = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * p;
}

vector<lli> primes;
vector<bool> isPrime;
void primesSieve(lli n){
    isPrime.resize(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    primes.push_back(2);
    for(lli i = 4; i <= n; i += 2) isPrime[i] = false;
    lli limit = sqrt(n);
    for(lli i = 3; i <= n; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
            if(i <= limit)
            for(lli j = i * i; j <= n; j += 2 * i)
            isPrime[j] = false;
        }
    }
}

void factorize2(lli n){
    lli cont = 0;
    for(lli p : primes){
        if(p * p > n) break;
        int pot = 0;
        while(n % p == 0){
            pot++;
            n /= p;
        }   
        if(pot){
            cont ++;
            f.insert(p);
        }
    }
    if(n > 1){
        cont ++;
        f.insert(n);
    } 
    
}

int main(){
    __

    primesSieve(1e6);
    lli n, a, b; 
    n = nextInt(); 

    while(n--){
        f.clear();
        lli a, b; 
        a = nextInt();
        b = nextInt(); 

        factorize2(a);
        factorize2(b);
        
        cout <<f.size()<< "\n";
    }

return 0;
}