//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=615&page=show_problem&problem=959
#include<bits/stdc++.h>
using namespace std;
string num;

bool isPalindrome(string &s){
    for(int i = 0, j = s.size()-1; i < j; i++,j--){
        if(s[i] != s[j]){
            return false;
        }
    }
return true;
}

void addition(string &s){
    string aux = "";
    int carry = 0;
    for(int i = 0, j = s.size()-1; j >= 0; i++,j--){
        int curr_sum = (s[i]-'0') + (s[j]-'0') + carry;
        carry = curr_sum/10;
        aux += ((curr_sum%10)+'0');
    }

    if(carry){
        aux += (carry+'0');
    }

    for(int i = 0, j = aux.size()-1; i < j; i++,j--){
        swap(aux[i], aux[j]);
    }

    s = aux;
return;
}


void solve(void){
    cin >> num;

    int ct = 0;
    while(true){
        if(isPalindrome(num)){break;}
        addition(num);
        ct++;
    }
    
    cout << ct <<" "<<num<<"\n";
return;
}


int main(){

    int n; cin >> n;
    while(n--){
        solve();
    }

return 0;
}