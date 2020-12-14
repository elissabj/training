//A - Hardwood Species UVa jugde 10226
//https://vjudge.net/contest/407656#problem/A
#include<bits/stdc++.h>
using namespace std;
/*
c es un string
while (c.length()==0){
      getline(cin, c); 
}
*/
int main(){

    int test;
    cin >> test;
    cin.ignore(); 
    string blank;
    getline(cin, blank);
    bool flag = false;
    while(test--){

        if(flag){cout<<"\n";}

        string s;
        int total = 0;
        map<string, int> cantidad_cadenas;

        while(getline(cin, s)){
            if(s.size() == 0){
                break;
            }else{
                cantidad_cadenas[s]++;
            }
            total++;
        }

        for(auto it = cantidad_cadenas.begin(); it != cantidad_cadenas.end(); it++){
            cout <<it->first<<" "<<fixed<<setprecision(4)<< double(it->second*100)/double(total)<<"\n";
        }
        flag = true;
    }
return 0;
}