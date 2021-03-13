//https://omegaup.com/arena/problem/Check-brackets-in-the-code#problems
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s; 
    cin >> s; 

    stack<pair<char, int>>validate; 

    for(int i = 0; i < s.size(); i++){

        if((s[i] == '(') || (s[i] == '{') || (s[i] == '[')){
            validate.push({s[i],i+1});
        }else if(s[i] == ')'){
            if(validate.empty()){
                cout << i+1 <<"\n";
                return 0;
            }else{
                auto a = validate.top();
                if(a.first != '('){
                    cout << i+1 <<"\n";
                    return 0;
                }else{
                    validate.pop();
                }
            }
        }else if(s[i] == ']'){
            if(validate.empty()){
                cout << i+1 <<"\n";
                return 0;
            }else{
                auto a = validate.top();
                if(a.first != '['){
                    cout << i+1 <<"\n";
                    return 0;
                }else{
                    validate.pop();
                }
            }
        }else if(s[i] == '}'){
            if(validate.empty()){
                cout << i+1 <<"\n";
                return 0;
            }else{
                auto a = validate.top();
                if(a.first != '{'){
                    cout << i+1 <<"\n";
                    return 0;
                }else{
                    validate.pop();
                }
            }
        }

    }

    if(!validate.empty()){
        int pos = 0;
        while (!validate.empty()){
            auto x = validate.top();
            pos = x.second;
            validate.pop();
        }
        cout << pos <<"\n";
    }else{
        cout <<"Success\n";
    }

return 0;
}