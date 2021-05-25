//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=2502
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,map<string,string>>combination;

    combination["+x"]["+y"] = "+y";
    combination["+x"]["-y"] = "-y";
    combination["+x"]["+z"] = "+z";
    combination["+x"]["-z"] = "-z";
    combination["-x"]["+y"] = "-y";
    combination["-x"]["-y"] = "+y";
    combination["-x"]["+z"] = "-z";
    combination["-x"]["-z"] = "+z";
    combination["+y"]["+y"] = "-x";
    combination["+y"]["-y"] = "+x";
    combination["+y"]["+z"] = "+y";
    combination["+y"]["-z"] = "+y";
    combination["-y"]["+y"] = "+x";
    combination["-y"]["-y"] = "-x";
    combination["-y"]["+z"] = "-y";
    combination["-y"]["-z"] = "-y";
    combination["+z"]["+y"] = "+z";
    combination["+z"]["-y"] = "+z";
    combination["+z"]["+z"] = "-x";
    combination["+z"]["-z"] = "+x";
    combination["-z"]["+y"] = "-z";
    combination["-z"]["-y"] = "-z";
    combination["-z"]["+z"] = "+x";
    combination["-z"]["-z"] = "-x";


    int n; 
    string instruction, start;

    while(cin >> n && n != 0){
        start = "+x";
        for(int i = 0; i < n-1; i++){
            cin >> instruction;
            if(instruction[0] != 'N'){
                start = combination[start][instruction];
            }
        }
        cout <<start<<"\n";
    }
return 0;
}