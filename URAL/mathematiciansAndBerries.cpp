//https://acm.timus.ru/problem.aspx?space=1&num=2001
#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int a1, b1, a2, b2, a3, b3;
    int canasta_a = 0, canasta_b = 0;
    
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    canasta_a = a1 - a3;
    canasta_b = b1 - b2;
    
    cout << canasta_a <<" " << canasta_b <<"\n";
    
    return 0;

}