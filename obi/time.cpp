#include <iostream>
#include <list>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int tam;

	cin >> tam;
	tam++;

	list<int> grafo[tam];

	for(int i=1; i<tam; i++){
		int numero;
		cin >> numero;
		for(int j=0; j< numero;j++){
			int v;
			cin >> v;

			grafo[i].push_back(v);
			grafo[v].push_back(i);
		}
	}

	int grupo[tam];
	int cor[tam];

	for(int i=1; i<tam;i++){
		cor[i] = 0;
	}

	queue<int> fila;
	fila.push(1);
	cor[1] = 1;
	grupo[1] = 1;

	list<int>::iterator it;

	while(!fila.empty()){
		int u = fila.front();
		fila.pop();

		for(it = grafo[u].begin(); it!= grafo[u].end(); it++){
			if(cor[*it] == 0){
				fila.push(*it);

				cor[*it] = 1;
				if(grupo[u] == 1) grupo[*it] = 2;
				else grupo[*it] = 1;
			}
		}
		cor[u] = 2;
	}


	for(int i=1; i<tam;i++){
		if(grupo[i] == 1) cout << i << " ";
	}

	cout << endl;

	for(int i=1; i<tam;i++){
		if(grupo[i] == 2) cout << i << " ";
	}


	return 0;
}
