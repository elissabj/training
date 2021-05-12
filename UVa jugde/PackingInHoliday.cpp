#include <bits/stdc++.h>
using namespace std;
int t, l,w,h,suma,cont;
int main(){
cont=1;
    cin >> t;
    while(t--){
        suma=0;
        cin >>l >>w >>h;
        if(l <= 20){suma+=1;}
        if(w <= 20){suma+=1;}
        if(h <= 20){suma+=1;}
        if(suma==3)
        {cout << "Case "<<cont<<": "<<"good"<<endl;}
        else {cout << "Case "<<cont<<": "<<"bad"<<endl;}
        cont++;
    }
return 0;
}
