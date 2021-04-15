//https://omegaup.com/arena/problem/Pilas-iguales#problems
#include<bits/stdc++.h>
using namespace std;


int main(){

    int a, b, c;
    cin >> a >> b >> c;

    vector<int>h1(a),h2(b),h3(c);

    int a1 = 0, b1 = 0, c1 = 0;
    for(int &x: h1){
        cin >> x;
        a1 += x;
    } 
    for(int &x: h2){
        cin >> x;
        b1 += x;
    } 
    for(int &x: h3){
        cin >> x;
        c1 += x;
    } 
    
    int i = 0, j = 0, k = 0;
    while(!(a1 == b1 && b1 == c1)){
        if(a1 >= b1 && a1 >=c1){
            a1 -= h1[i]; i++;
        }else if(b1 >= a1 && b1 >=c1){
            b1 -= h2[j]; j++;
        }else{
            c1 -= h3[k]; k++;
        }
    }

    cout << a1 <<"\n";
    return 0;
}