#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d,e,z;
int n;
void descomponer(long long z)
{
    a=z/100000;
    b=(z-(a*100000))/10000;
    c=(z-(a*100000+b*10000))/1000;
    d=(z-(a*100000+b*10000+c*1000))/100;
    e=(z-(a*100000+b*10000+c*1000+d*100))/10;
    cout<< e << endl;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>> n;
    while(n--)
    {
        cin >> z;
        z=((((((z*567)/9)+7492)*235)/47)-498);
        z=abs(z);
        descomponer(z);
    }
return 0;
}
