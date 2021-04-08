//https://codeforces.com/problemset/problem/80/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main (){
    
    map<int, int> a;
    int horas, min;
    char c;
    
    cin>>horas;
    cin>>c;
    cin>>min;
    
    //cout<< horas << " " << min << endl;
    if(horas >= 12){
        horas-=12;
    }
    
    double x = horas*30 + 0.5*min;
    
    int y = min * 6;
    
    cout << x << " " << y << endl;
    
    
    
    return 0;
}
