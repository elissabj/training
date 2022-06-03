#include<bits/stdc++.h>
using namespace std;
vector<double>v;


bool check (double x){

    long double ansFinal = 0.0;

    for(int i = 0; i  < v.size(); i++){
        long double toKnow = v[i];
        ansFinal += (1.0/(toKnow - x));
    }
   
    return (ansFinal < 0);
}

// bool isEqual(double x, double y){
//     double z = abs(x-y);

//     return (z <= 0.0000000001);
// }

void bb (long double x, long double y, vector<long double>& ans){

    long double left = x, right = y, middle; 
    int times = 60;

    while(times--){

   // while(left < right){


        middle = (right+left)/2.0;

        // cout << middle << "\n";

        // cout << left << " " << right << "\n";

        if(check(middle)){
            left = middle;
        }else{
            right = middle;
        }

    }


    ans.push_back(right);


return; 
}



int main(){

    int n; cin >> n; 

    for(int i = 0; i < n; i++){
        long double aux; cin >> aux;
        v.push_back(aux);
    }

    vector<long double>ans;
    sort(v.begin(),v.end());

    for(int i = 0; i < n-1; i++){
        bb(v[i], v[i+1], ans);
    }

    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++){
        long double x = ans[i];
        cout  << fixed << setprecision(3) << x << " ";
    }


return 0;
}


