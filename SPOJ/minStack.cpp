//https://www.spoj.com/problems/MINSTACK/
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);


int main(){
    __
    int n; cin >> n; 
    stack<pair<long long int, long long int>>presents;
    long long int mini = 1e9+1;
    while(n--){
        string s; cin >> s;
        if(s.size() == 4){
            long long int num; cin >> num;
            if(presents.empty()){
                mini = num;
            }else{
                mini = min(num, presents.top().second);
            }
            presents.push({num, mini});
        }else{
            if(s[0] == 'M'){
                if(presents.empty()) cout <<"EMPTY\n";
                else{
                    auto a = presents.top();
                    cout <<a.second<<"\n";
                }
            }else{
                if(!presents.empty()) presents.pop();
                else cout <<"EMPTY\n";
            }
        }
    }
return 0; 
}