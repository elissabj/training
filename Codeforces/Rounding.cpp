// https://codeforces.com/gym/102465/problem/E

#include<bits/stdc++.h>
using namespace std;


#define vpsi vector<pair<string,double>>
#define f first
#define s second
#define forn(sz) for(int i = 0; i < sz; i++)
#define read cin>>
#define prnt(x) cout<<x<<" "
#define prnt2(x,y) cout<<fixed<<setprecision(2)<<x<<" "<<y<<"\n"

int main(){

    int n;
    read n;

    vpsi v(n);

    double cont = 0.00;
    forn(n){
        read v[i].f;
        read v[i].s;
        cont += v[i].s;
    }

    double totalMini = 0.00, totalMaxi = 0.00;

    totalMaxi = cont + n * 0.49;
    totalMini = cont - n * 0.50;


    if(totalMini > 100.00 ||  totalMaxi < 100.00){
        prnt("IMPOSSIBLE\n");
        return 0;
    }

    forn(n){
        prnt(v[i].f);

        double a, b;

        a = max( (v[i].s - 0.50) , 100 - (totalMaxi - v[i].s - 0.49) );
        b = min( (v[i].s + 0.49), 100 - (totalMini - v[i].s + 0.50) );


        if(b >= 100){
            b = 100.00;
        }

        if(a <= 0){
            a = 0.00;
        }

        prnt2(a, b);
    }

    return 0;
}
