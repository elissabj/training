#include<bits/stdc++.h>
using namespace std;


void comparar(long long a, long long b){
        if (a<b)cout<<"<\n";
		else if (a>b) cout<<">\n";
		else cout<<"=\n";	
}

int main(){
	int n,i;
	long long a,b;
	cin>>n;
	if(n<=15){
	  for (i=1;i<=n;i++){
		  cin>>a >> b;
	 	  comparar(a,b);
		}
	}
	return 0;
}
