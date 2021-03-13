//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1456
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);
string m, n;

int main(){__

    int set_values[10][4] = {{0},{1},{6, 2, 4, 8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}};

  while(cin >> m >> n && (m[0] != '0' ||n[0] != '0')){

      if(n[0] == '0'){
          cout <<"1\n";
          continue;
      }

        int m1 = m[m.size()-1]-'0', n1 = (n[n.size()-2]-'0')*10 + (n[n.size()-1]-'0');
        
        n1 = n1%4;
        if(m1 == 0 || m1 == 1 || m1 == 5 || m1 == 6){
            cout <<set_values[m1][0]<<"\n";
        }else if(m1 == 4 || m1 == 9){
            if(n1 % 2 == 0) cout <<set_values[m1][0]<<"\n";
           else cout <<set_values[m1][1]<<"\n";
        }else{
            n1 = n1%4;
            cout <<set_values[m1][n1]<<"\n";
        }
    }

return 0;
}