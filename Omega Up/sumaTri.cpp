/*https://omegaup.com/arena/problem/Suma-Acarreada/#problems*/
#include<bits/stdc++.h>
using namespace std;

void sumaCadenas(string &x, string &y){

    int acarreo = 0;
    string suma = "";

    if(x.size() > y.size()) swap(x,y);
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    for(int i = 0; i < x.size(); i++){
        int sum_actual = (x[i]-'0') + (y[i]-'0') + acarreo;
        suma += (sum_actual%10)+'0';
        acarreo = sum_actual/10;
    }

    for(int i = x.size(); i < y.size(); i++){
        int sum_actual = (y[i]-'0') + acarreo;
        suma += (sum_actual%10)+'0';
        acarreo = sum_actual/10;
    }

    if(acarreo) suma += acarreo+'0';

    for(int i = suma.size()-1; i >= 0; i--){
        cout << suma[i];
    }
    cout<<"\n";
    return;
}

int main(){

    int n, aux; 
    
    cin >> n;
    string x, y;
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >>aux;
        if(aux == 0){
            if(x.size()!= 0){
                 x += aux+'0';
            }
        }else x += aux+'0';
    }

    for(int i = 0; i < n; i++){
        cin >>aux;
        if(aux == 0){
            if(y.size()!= 0){
                 y += aux+'0';
            }
        }else y += aux+'0';
    }

    sumaCadenas(x,y);

return 0;
}
