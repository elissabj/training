#include<bits/stdc++.h>
using namespace std;
int dato[20];
int n,a,b,c,res;
int main()
{
    cin>>n;
    if(n<=20){
        for(int i=1; i<=n;i++){
            cin>> a >> b >> c;
            if((a>b && a<c)||(a<b && a>c)){res=a;}
            else if((b>a && b<c)||(b<a && b>c)){res=b;}
            else{res=c;}
            dato[i]=res;
        }
        
        for(int i=1; i<=n;i++){
            cout<< "Case "<< i<< ":" << " "<<dato[i]<< endl;
        }
        
    }
    return 0;
}
