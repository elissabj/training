//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=979
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, prev, curr;
    
    while(cin >> n){

        bool isJolly = true;
        cin >> prev;
        set <int> values;

        for(int i = 1; i < n; i++){
            cin >> curr; 
            if(values.count(abs(curr-prev))){
                isJolly = false; 
            }else{
                values.insert(abs(curr-prev));
            }
            prev = curr;
        }


        for(int i = 1; i < n ; i++){
            if(!values.count(i)){
                isJolly = false; break;
            }
        }

        (isJolly) ?  cout<<"Jolly\n" : cout <<"Not jolly\n";
    }

return 0;
}