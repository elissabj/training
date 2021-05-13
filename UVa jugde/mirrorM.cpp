//https://onlinejudge.org/external/4/466.pdf
#include<bits/stdc++.h>
using namespace std; 
int veces;

string reflectVerticalMatrix (string values){

    string matrixRotated ="";
    int block_size = sqrt(values.size());

    int i = values.size()-block_size;
    int pivote = values.size()-1;

    while(i >= 0){

        for(int j = i; j <= pivote; j++){
            matrixRotated += values[j];
        }
        
        pivote = i-1;
        i -= block_size;
    }

return matrixRotated;
}

string rotateMatrix90 (string original){

    string matrixRotated ="";
    int block_size = sqrt(original.size());

    int i = original.size()-block_size;
    while (i < original.size()){

        for(int j = i; j >= 0; j -= block_size){
            matrixRotated += original[j];
        }
        i ++;
    }

return matrixRotated;
}

bool checaRot90 (string ori, string cam){

    string aux = rotateMatrix90 (ori);
    if (cam == aux)return true;
    
return false;
}

bool checaRot180 (string ori, string cam){

    string aux = "";
    for(int i = ori.size()-1; i >= 0; i--){
        aux += ori[i];
    }

    if (cam == aux) return true;

return false;
}

bool checaRot270 (string ori, string cam){

    string aux = "";
    for(int i = ori.size()-1; i >= 0; i--){
        aux += ori[i];
    }

    aux = rotateMatrix90(aux);

    if (cam == aux) return true;

return false;
}

bool checaReflejo (string ori, string cam){

    string aux = "";

    aux = reflectVerticalMatrix(ori);
    if (cam == aux) return true;

return false;
}

bool checaRe90 (string ori, string cam){

    string aux = "";

    aux = reflectVerticalMatrix(ori);
    aux = rotateMatrix90(aux);
    if (cam == aux) return true;

return false;
}

bool checaRe180 (string ori, string cam){

    string aux = "";
    string aux2 = "";
    aux = reflectVerticalMatrix(ori);
    for(int i = aux.size()-1; i >= 0; i--){
        aux2 += aux[i];
    }
    
    if (cam == aux2) return true;

return false;
}

bool checaRe270 (string ori, string cam){

    string aux = "";
    string aux2 = "";

    aux = reflectVerticalMatrix(ori);
    for(int i = aux.size()-1; i >= 0; i--){
        aux2 += aux[i];
    }
    aux2 = rotateMatrix90(aux2);

    if (cam == aux2) return true;

return false;
}

void solve(int n){

    veces++;

    string original ="";
    string cambiada ="";

    string aux ="";
    string aux2 ="";

    for(int veces = 0; veces < n; veces++){
        cin >> aux >> aux2;
        original += aux;   
        cambiada += aux2;   
    }
    
    if(original == cambiada){
        cout <<"Pattern " << veces <<" was preserved.\n";
        return;
    }else if(checaRot90(original, cambiada)){
        cout <<"Pattern " << veces <<" was rotated 90 degrees.\n";
        return;
    }else if (checaRot180(original, cambiada)){
        cout <<"Pattern " << veces <<" was rotated 180 degrees.\n";
        return;
    }else if (checaRot270(original, cambiada)){
        cout <<"Pattern " << veces <<" was rotated 270 degrees.\n";
        return;
    }else if (checaReflejo(original, cambiada)){
        cout <<"Pattern " << veces <<" was reflected vertically.\n";
        return;
    }else if (checaRe90(original, cambiada)){
        cout <<"Pattern " << veces <<" was reflected vertically and rotated 90 degrees.\n";
        return;
    }else if (checaRe180(original, cambiada)){
        cout <<"Pattern " << veces <<" was reflected vertically and rotated 180 degrees.\n";
        return;
    }else if (checaRe270(original, cambiada)){
        cout <<"Pattern " << veces <<" was reflected vertically and rotated 270 degrees.\n";
        return;  
    }else{
        cout <<"Pattern " << veces <<" was improperly transformed.\n";
        return;
    }
}

int main(){

    int n;
    while(cin >> n){
        solve(n);
    }


return 0;
}