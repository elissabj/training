#include<bits/stdc++.h>
using namespace std;
string cadena;
string fin("#");
string a("HELLO"); //ENGLISH
string b("HOLA"); // SPANISH
string c ("BONJOUR"); // FRENCH
string d ("HALLO"); //GERMAN
string e ("CIAO"); //ITALIAN
string f ("ZDRAVSTVUJTE"); //RUSSIAN
int i=1;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

    while(cin >> cadena){
        if(cadena== fin){break;}
        else if(cadena.compare(a)== 0){cout<< "Case "<< i<< ":" << " "<<"ENGLISH"<< endl; i++;}
        else if(cadena.compare(b)== 0){cout<< "Case "<< i<< ":" << " "<<"SPANISH"<< endl; i++;}
        else if(cadena.compare(c)== 0){cout<< "Case "<< i<< ":" << " "<<"FRENCH"<< endl; i++;}
        else if(cadena.compare(d)== 0){cout<< "Case "<< i<< ":" << " "<<"GERMAN"<< endl; i++;}
        else if(cadena.compare(e)== 0){cout<< "Case "<< i<< ":" << " "<<"ITALIAN"<< endl; i++;}
        else if(cadena.compare(f)== 0){cout<< "Case "<< i<< ":" << " "<<"RUSSIAN"<< endl; i++;}
        else{cout<< "Case "<< i<< ":" << " "<<"UNKNOWN"<< endl; i++;}
    }
return 0;
}
