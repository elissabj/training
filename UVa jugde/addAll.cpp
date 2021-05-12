//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1895
//UVa judge AddAll 10954
#include<bits/stdc++.h>
using namespace std;

int main(){

    int casos;
    while(cin>>casos){

        if(casos == 0){break;}


        priority_queue<int,vector<int>, greater<int>>numeros; 


        for(int i = 0; i < casos; i++){
            int num_actual; cin >> num_actual;
            numeros.push(num_actual);
        }

        int suma = 0;
        int res = 0;

        while(numeros.size() != 1){
            suma = numeros.top(); // 2 -- 5
            numeros.pop();
            suma += numeros.top(); // 2 + 4 --- 5 + 6
            numeros.pop(); // 5 6 8 -- 6 6 8
            res += suma; //14+25 
            numeros.push(suma); // 5 6 |6| 8 
            suma = 0;
        }

        cout <<res <<endl;
    }

return 0;
}