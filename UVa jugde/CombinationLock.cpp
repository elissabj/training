#include <bits/stdc++.h>
using namespace std;
int inicio, a,b,c,res;
int main(){
    while(cin >> inicio){
        cin >> a >> b >> c;
        if(inicio==0 && a ==0 && b==0 && c==0){break;}
        res=(1080+((inicio-a+40)%40+ (b-a+40)%40 + (b-c+40)%40)*9);
        cout << res << endl;    
    }

return 0;   
}
