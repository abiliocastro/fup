/* QUESTÃO:
Implemente um programa que recebe uma matriz quadrada de dimensão n x n e informe se ela é uma matriz diagonal inferior ou não.

Numa matriz diagonal inferior, todos os elementos acima da diagonal principal são iguais a 0. 
Os elementos da diagonal principal ou abaixo dela podem assumir valores quaisquer.

Entrada:

3

7 0 0

6 2 0

1 3 4

Saída:

SIM

Entrada:

4

7 0 0 0

6 2 0 0

1 3 4 5

5 2 7 1

Saída:

NAO

Entrada:

4

7 0 0 0

6 2 0 0

1 3 0 0

5 2 7 1

Saída:

SIM */

#include <stdio.h>

int main(){
	int n, i, j;
	
	scanf("%d", &n);
	
	int matriz[n][n];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int flag = 0;
	
	for(i = 0; i < (n - 1); i++){
		for(j = (i + 1); j < n; j++){
			if(matriz[i][j] != 0){
				printf("NAO");
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}
	if(!flag) printf("SIM");
	
	return 0;
}