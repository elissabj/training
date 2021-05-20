//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=514
#include<bits/stdc++.h>
using namespace std;

int main(){

    double h,u,d,f;

    while(cin >> h >> u >> d >> f && h != 0){
        bool success = true; 
        double aux = 0.0, fatige = (u*f)/100, i = 0;
        while(true){
            aux += u;
            i++;
            if(aux > h) break;

            aux -= d;
            if(aux < 0){success = false; break;}

            if(u > 0) u -= fatige;
            else u = 0;

        }

        (success) ? cout <<"success on day "<<i<<"\n": cout <<"failure on day "<<i<<"\n";
    }

return 0;
}