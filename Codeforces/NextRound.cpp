//https://codeforces.com/contest/158/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n ,k;
    cin >> n >> k;
    int aux = 0; 
    int res = 0;
    int score[n+2];
    for(int i = 0; i < n ; i++) cin >> score[i];
    aux = score[k-1];
    for (int i = 0; i < n ; i++){
        if(score[i] >= aux && (score[i]!=0 || aux != 0)){
            res++;
        }
    }
    cout << res <<  endl;
return 0;
}
 
