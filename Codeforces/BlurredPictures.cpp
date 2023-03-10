//https://codeforces.com/gym/102465/problem/B

#include<bits/stdc++.h>
using namespace std;

#define vpii vector<pair<int,int>>
#define f first
#define s second
#define forn(sz) for(int i = 0; i < sz; i++)
#define read cin>>
#define prnt(x) cout<<x<<"\n"
#define prnt2(x,y) cout<<x<<" "<<y<<"\n"
vpii v;

bool check(int x){
    int lCurr, rCurr, lPrev, rPrev;

    forn(v.size()-x+1){  
        lPrev = v[i].f;
        rPrev = v[i].s;
        
        lCurr = v[i+x-1].f;
        rCurr = v[i+x-1].s;

        if ( (lCurr > rPrev) || (rCurr < lPrev) ){
            continue;
        }

        if(lCurr <= lPrev){
            if(rCurr <= rPrev){
                if(rCurr - lPrev + 1 >= x){
                    return true;
                }

            }else{
                if(rPrev - lPrev + 1 >= x){
                    return true;
                }
            }
        }else{

            if(rCurr <= rPrev){
                if(rCurr - lCurr + 1  >= x){
                    return true;
                }
            }else{
                if(rPrev - lCurr + 1 >= x){
                    return true;
                }
            }
        }
    }
    
    return false;
}


int main(){

    int n; cin >> n;
    v.resize(n);

    forn(n){
        read v[i].f;
        read v[i].s;
    }

    int left = 1, right = n, middle, ans = 0;

    while(left <= right){

        middle = (left + right) / 2;
        if(check(middle)){
            ans = middle;
            left = middle + 1;
        }else{
            right = middle -1;
        }
    }

    prnt(ans);

return 0;
}