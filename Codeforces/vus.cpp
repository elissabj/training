#include<bits/stdc++.h>
using namespace std;

int main(){
    int people, pens, notes;
    cin >> people >> pens >> notes;
    
    if(pens >= people && notes >= people){
        cout << "Yes" << endl;
    }else{
        cout<< "No" << endl;
    }
return 0;
}
