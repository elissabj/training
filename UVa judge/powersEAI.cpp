//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1456
#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false),cin.tie(NULL);
string m, n;

int main(){__


  while(cin >> m >> n && (m[0] != '0' ||n[0] != '0')){

      if(n[0] == '0'){
          cout <<"1\n";
          continue;
      }

        int m1 = m[m.size()-1]-'0', n1 = (n[n.size()-2]-'0')*100+(n[n.size()-2]-'0')*10 + (n[n.size()-1]-'0');

        if(m1 == 0){
            cout <<"0\n";
        }else if(m1 == 1){

            cout <<"1\n";

        }else if(m1 == 2){
            
                n1 = n1%4;
                if(n1 == 0){
                    cout <<"6\n";
                }else if(n1 == 1){
                    cout <<"2\n";
                }else if(n1 == 2){
                    cout <<"4\n";
                }else if(n1 == 3){
                    cout <<"8\n";
                }

        }else if(m1 == 3){
            n1 = n1%4;
            if(n1 == 0){
                cout <<"1\n";
            }else if(n1 == 1){
                cout <<"3\n";
            }else if(n1 == 2){
                cout <<"9\n";
            }else if(n1 == 3){
                cout <<"7\n";
            }

        }else if(m1 == 4){
           if(n1 % 2 == 0) cout <<"6\n";
           else cout <<"4\n";

        }else if(m1 == 5){
            cout <<"5\n";
        }else if(m1 == 6){
            cout <<"6\n";
        }else if(m1 == 7){
            n1 = n1%4;
            if(n1 == 0){
                cout <<"1\n";
            }else if(n1 == 1){
                cout <<"7\n";
            }else if(n1 == 2){
                cout <<"9\n";
            }else if(n1 == 3){
                cout <<"3\n";
            }

        }else if(m1 == 8){
                n1 = n1%4;
                if(n1 == 0){
                    cout <<"6\n";
                }else if(n1 == 1){
                    cout <<"8\n";
                }else if(n1 == 2){
                    cout <<"4\n";
                }else if(n1 == 3){
                    cout <<"2\n";
                }

        }else if(m1 == 9){
            if(n1 % 2 == 0) cout <<"1\n";
            else cout <<"9\n";
        }
    }

return 0;
}