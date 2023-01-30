//https://codeforces.com/gym/101908/problem/I

#include<bits/stdc++.h>
using namespace std;


int main(){

	int n, m, start, pos, cont = 0; 
	bool checking = false; 
	cin >> n >> m; 
	
	vector<int>v(m, 0);
	cin >> start;
	
	for(int i = 0; i < start; i++){
		cin >> pos; 
		v[pos-1] = 1;
	}

	vector<vector<int>>inst(n, vector<int>(m, 0));

	for(int i = 0; i < n; i++){
		cin >> start;

		while(start--){
			cin >> pos;
			inst[i][pos-1] = 1;
		}
	
	}

    // pasando por todas las instrucciones a lo mas 2 veces porque si no puedo en dos vueltas ya no podre 
	for(int i = 0; i < 2*n; i++){

        // v ^= inst[i];  // xor a todo el arreglo
        for(int j = 0; j < m; j++){
            v[j] ^= inst[i%n][j];
        }
			
	    checking = false; 
		for(int j = 0; j < m; j++){
			checking |= v[j];
		}

		if(!checking){
			cout << cont+1 <<"\n"; return 0;
		}else{
			cont++;
		}

	}

    cout<<"-1\n";

return 0;
}