//https://codeforces.com/contest/750/problem/A

#include<bits/stdc++.h>
using namespace std; 

bool check (int posibleAns, int minutes){

    int minutesTaken = 0;

    for(int i = 1; i <= posibleAns; i++){
        minutesTaken += (5*i);
        if(minutesTaken > minutes){
            return false;
        }
    }

return true;
}


int main(){

    int n, k; 
    cin >> n >> k; 

    int minutesAvailable = 240-k;

    int left = 0, right = n+1, middle;

    while(left + 1 < right){
        
        middle = left + (right - left)/2; 

        if(check(middle, minutesAvailable)){
            left = middle;
        }else{
            right = middle;
        }
    }

    cout << left << "\n"; 

return 0;
}