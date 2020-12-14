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

        // 8 2 5 4 6
        // 2 4 5 6 8 
        // 2+4 = 6 la formo 
        // 2 4 5 6 | 6 | 8
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

        /*vector<int> numeros;
        map <int, int> acumulados;
        //queue<int> acumulados;

        for(int i = 0; i < casos; i++){
            int num_actual; cin >> num_actual;
            //numeros.push_back(num_actual);
            acumulados[num_actual]++;
        }

        //sort(numeros.begin(),numeros.end());

        int suma = 0;
        int res = 0;

        for(auto it = acumulados.begin(); it != acumulados.end(); it++){
            suma = acumulados[it];
            acumulados.erase(it);
            suma += acumulados[it]->fisrt; // 2 + 4 = 6
            acumulados.erase(it);
            res = suma; 
            //numeros.push_back(res); //6 
            acumulados[res]++;
             if(acumulados[suma]->second != 0){
                 while(acumulados[suma] != 0){
                suma = acumulados[it];
                acumulados.erase(it);
                suma += acumulados[it]->first; // 2 + 4 = 6
                acumulados.erase(it);
                res = suma; 
                //numeros.push_back(res); //6 
                acumulados[res]++;
               }
            }
        }
        
        cout << res <<endl;*/

        
        //5 70 2 1 43 --- 1 2 # 5 43 
        //1 2 5 43 (3)
       /* vector<long long>numeros;
        vector<long long>res;
        long long suma = 0;
        int cont = 0;

        for(int i = 0; i < casos; i++){
            long long num_actual; cin >> num_actual;
            numeros.push_back(num_actual);
        }

        sort(numeros.begin(),numeros.end());

        for(int i = 0; i < numeros.size(); i++){
            suma += numeros[i];
            cont++;
            if(cont == 2){
                res.push_back(suma);
                cont = 0;
                suma = 0;
            }
        }

        
        long long suma_total = 0;
        suma = numeros[numeros.size()-1] + res[0];
        res.push_back(suma); 
        suma = 0;
        cont = 0;
       
        for(int i = 0; i < res.size(); i++){
            suma_total += res[i];        
        }

        cout << suma_total <<"\n";*/
    }

return 0;
}