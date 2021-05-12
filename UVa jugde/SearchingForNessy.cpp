#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        long long n, m;
        cin >> n >> m;
        long long res = 0;
        long long area_rec = 0;
        area_rec = n*m;
        res = area_rec /9;
        
        cout <<area_rec <<endl;
        cout <<res <<endl;
        if(n % 3 != 0){
            int aux = 0;
            for(int i = 6 ; i < n ; i +=3){
                if(i == 6){aux = i;}
                else if(n > i){aux += 3;}
            }
            n = aux; 
            area_rec = n*m;
            res = area_rec /9;
        } 
         if(m % 3 != 0){
            int aux = 0;
            for(int i = 6 ; i < m ; i +=3){
                if(i == 6){aux = i;}
                else if(m > i){aux += 3;}
            }
            m = aux; 
            area_rec = n*m;
            res = area_rec /9;
        }
        cout <<res <<endl;    
    }
}
