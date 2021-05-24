//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=1365
#include<bits/stdc++.h>
using namespace std;
int val;

int sumDigit(string s){

    if(s.size() == 1){
        val = stoi(s);
        return val;
    }

    val = 0;
    for(int i = 0; i < s.size(); i++){
        val += s[i]-'0';
    }
   
    s = to_string(val);
    return sumDigit(s);
}

int main(){

    vector<int>bucket(26,0);
    for(int i = 0; i < bucket.size(); i++){
        bucket[i] += i+1;
    }
    
    string a,b;
    while(getline(cin,a), getline(cin,b)){
        int sum_a = 0, sum_b = 0;

        for(int i = 0; i < a.size(); i++){
            if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
                char aux = tolower(a[i]);
                sum_a += bucket[aux-'a'];
            }
        }

        for(int i = 0; i < b.size(); i++){
            if((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z')){
                char aux = tolower(b[i]);
                sum_b += bucket[aux-'a'];
            }
        }
        
        sum_a = sumDigit(to_string(sum_a));
        sum_b = sumDigit(to_string(sum_b));

        cout <<fixed <<setprecision(2) << (min(sum_a,sum_b)*100.0/max(sum_a,sum_b))<<" %\n"; 
    }

return 0;
}