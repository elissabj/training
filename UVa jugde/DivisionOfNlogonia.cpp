#include<bits/stdc++.h>
using namespace std;
int nCases;
int n,m,x,y,a;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
while(cin>>nCases){ 
    cin>> n >> m;
    for(int i=0; i<nCases; i++){
        cin>>x >>y;
        if(x==n||y==m){cout<<"divisa"<<endl;}
        else if(x>n && y>m){cout<<"NE"<<endl;}
        else if(x>n && y<m){cout<<"SE"<<endl;}
        else if(x<n && y>m){cout<<"NO"<<endl;}
        else{cout<<"SO"<<endl;}
    }
    if(nCases==0){break;}
}
 return 0;
}
