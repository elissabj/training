//https://codeforces.com/contest/1223/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--){
        int numero;
        cin >> numero;
         if(numero % 2 == 0){
             if(numero == 2){
                 cout << "2" << endl;
            }else{
                cout << "0" << endl;
            }

        }else{
            cout << "1" << endl;
        }
        
    }
return 0;
}
