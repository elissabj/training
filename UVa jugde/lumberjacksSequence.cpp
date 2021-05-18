//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3093
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, copy; cin >> t;
    copy = t;
    while(t--){
        vector<int>values(10);
        vector<int>order_val(10);
        for(int i = 0; i < 10; i++){ 
            cin >> values[i];
            order_val[i] = values[i];
        }
        
        bool isOrder = true;
        sort(order_val.begin(), order_val.end());
        for(int i = 0; i < 10; i++){
            if(values[i] != order_val[i]){
                isOrder = false;
            }
        }

        if(!isOrder){
            isOrder = true;
            reverse(order_val.begin(), order_val.end());
            for(int i = 0; i < 10; i++){
                if(values[i] != order_val[i]) 
                    isOrder = false;
            }
        }

        if(t == copy -1) cout<<"Lumberjacks:\n";
        
        (isOrder) ? cout<<"Ordered\n":cout<<"Unordered\n";        
    }

return 0;
}