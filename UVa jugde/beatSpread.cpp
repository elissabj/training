//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1753
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, add, sub, aux, copy_add, copy_sub; 
    
    cin >> n;
    while(n--){
        
        cin >> add >> sub;
        aux = (add-sub)/2;
        copy_add = add - aux;
        copy_sub = copy_add - sub;
        

        if((abs(copy_add+copy_sub) == add)&& (abs(copy_add-copy_sub) == sub)){
            if(copy_sub < 0){cout<<"impossible\n";}
            else{cout << copy_add <<" "<< copy_sub<<"\n";}
        }else{
            cout<<"impossible\n";
        }

    }

return 0;
}