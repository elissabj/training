//https://codeforces.com/contest/263/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int matrix[5][5];
    int idx = 0, idy = 0;
    for(int i = 0; i < 5; i++){
        for(int j =0; j < 5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                idx = i; idy = j;
            }
        }
    }

    cout << (abs(2-idx)+(abs(2-idy))) <<"\n";
return 0;
}