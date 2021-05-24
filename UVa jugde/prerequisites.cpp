//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=1860
#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,m, minTakeCourse;
    string course;
    while(cin >> k && k != 0){
        cin >> m; 

        map<string, int> chooseCourse;

        for(int i = 0; i < k; i++){
            cin >> course;
            chooseCourse[course] = 0;
        }

        bool canDoIt = true;
        while(m--){
            int i, coincidence = 0;
            cin >> i >> minTakeCourse;

            while(i--){
                cin >> course;
                if(chooseCourse.count(course)){
                    coincidence++;
                }
            }

            if(coincidence < minTakeCourse){
                canDoIt = false;
            }
        }
        (canDoIt)? cout <<"yes\n":cout <<"no\n";
    }
    
return 0;
}