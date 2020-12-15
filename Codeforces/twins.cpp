#include<bits/stdc++.h>
using namespace std;

int main(){
    int tam;
    cin >> tam;

    int sum_total = 0;
    vector<int>elements(tam);
    for(auto &x: elements){
        cin >> x;
        sum_total+=x;
    } 

    sort(elements.begin(),elements.end());

    sum_total = sum_total / 2; //tengo que llegar para tener el minimo
    int sum_max = 0;
    int coins = 0;

    for(int j = elements.size()-1; j >= 0; --j){
        coins ++;
        sum_max += elements[j];
        if(sum_max > sum_total){break;} // si lo supera ya tengo el minimo
    }

    cout << coins <<"\n";
return 0;
}