#include<bits/stdc++.h>
using namespace std;
string texto;
string str1("``"); 
string str2("''");
int main(){
   bool primero=true; 
    while(getline (cin,texto)){      
            for(int i=0;i<texto.size();i++){
                  if(texto[i]=='"'){
                        if(primero){
                            texto.erase(i,1);
                            texto.insert(i,str1);       
                            primero=false;        
                        }else{
                            texto.erase(i,1);
                            texto.insert(i,str2);
                            primero=true; 
                        }                  
                  }      
            }   
            cout<<texto<<endl;
   }  
 return 0;   
}

