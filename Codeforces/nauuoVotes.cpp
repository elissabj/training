//https://codeforces.com/problemset/problem/1173/A
#include<bits/stdc++.h>
using namespace std; 

int main(){

    int x, y, z;
    cin >> x >> y >> z;

    if(x > y  && x-y> z){
        cout <<"+\n";
    }else if (y > x && y-x > z){
        cout <<"-\n";
    }else if (x == y && z == 0){
        cout <<"0\n";
    }else if (x== 0 && y==0 && z==0){
        cout <<"0\n";
    }else{
        cout <<"?\n";
    }

return 0; 
}