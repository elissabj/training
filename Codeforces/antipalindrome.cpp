//https://codeforces.com/problemset/problem/981/A
#include <bits/stdc++.h>
using namespace std;
int main (){
    
    string s;
    cin>>s;
    
    int pal = 1;
    for(int i = 0, j = s.size()-1; i < s.size()/2; i++, j--){
        if(s[i] != s[j]){pal = 0; break;}
    }
    
    if(pal == 0){
        cout << s.size() << endl;
    } else {
        map<char, int >mapa;
        for(char c: s){
            mapa[c]++;
        }
        if(mapa.size() == 1){
            cout << "0\n";
        } else {
            cout << s.size()-1 << "\n";
        }
    }
    return 0;
}
