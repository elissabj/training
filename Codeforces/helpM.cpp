#include<bits/stdc++.h>
using namespace std;

int main(){

    string input; 
    cin >> input;

    vector<int> answer;

    for(int i = 0; i < input.size();i++){
        if(input[i] != '+') {
            int aux = input[i] - '0';
            answer.push_back(aux);
        }
    }

    sort(answer.begin(), answer.end());

    for(int i = 0; i < answer.size(); i++){
        if(i == answer.size()-1) cout << answer[i] <<"\n";
        else cout << answer[i] <<"+";
    }

return 0;
} 