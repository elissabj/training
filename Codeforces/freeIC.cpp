//https://codeforces.com/contest/686/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    long long int x; 
    cin >> n >> x;

    long long int ice_cream = x;
    long long int sad_kid = 0;

    while(n--){
        char aux; long long int d; 
        
        cin >> aux >> d;
        if(aux == '+'){
            ice_cream += d;
        }else{
            if(ice_cream < d){
                sad_kid++;
            }else{
                ice_cream -= d;
            }
        }
    }

    cout << ice_cream << " " << sad_kid <<"\n";

return 0;
}