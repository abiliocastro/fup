/* QUESTÃO: 
Implemente um programa que irá simular a mega-sena.

O programa vai receber do usuário 6 números entre 1 a 60. 
O programa deve fazer a verificação se os 6 números realmente estão entre o intervalo, 
não permitindo números fora do intervalo. Além disso não pode ter números repetidos.

O programa então irá gerar aleatoriamente 6 números entre 1 a 60, evitando números repetidos e deve imprimir esses números. 

Depois ele deve comparar com os 6 números escolhidos pelo usuário e informar se o usuário acertou os 6 números imprimindo "mega",
ou acertou 5 números imprimindo "quina", ou "quadra", "terno", "dupla", "falta de sorte" ou "azarado". 
Para cada uma das opções imprima os números que o usuário acertou.

Exemplo:

Entrada:9 3 29 34 20 49

49 34 9 13 22 3

Saída: Quadra: 49 34 9 3

OBS: NÃO TEM CASOS DE TESTE E OBRIGATORIAMENTE DEVE-SE USAR VETOR */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 6, inf = 1, sup = 60;
	int aposta[n], mega[n];
	int i, j;
	
	for(i = 0; i < n; i++)
		scanf("%d", &aposta[i]);
	
	int flag = 0;
	for(i = 0; i < n; i++){
		if(aposta[i] < inf || aposta[i] > sup){
			flag = 1;
			break;
		}
	}
	
	if(i < n) printf("Aposta fora do intervalo.");
	else{
		int flag = 0;
		for(i = 0; i < (n - 1); i++){
			for(j = i + 1; j < n; j++){
				if(aposta[i] == aposta[j]){
					flag = 1;
					break;
				}
			}
			if(flag) break;
		}
		
		if(flag) printf("Aposta com numeros repetidos.");
		else{
			for(i = 0; i < n; i++){
				mega[i] = inf + (rand() % (sup - inf + 1));
				printf("%d ", mega[i]);
			}

			printf("\n");
			
			for(i = 0; i < (n - 1); i++){
				for(j = i + 1; j < n; j++){
					if(mega[i] == mega[j]){
						flag = 1;
						break;
					}
				}
				if(flag) break;
			}
			if(flag)printf("Jogo com numeros repetidos.");
			else{
				int cont = 0;
				for(i = 0; i < n; i++)
					for(j = 0; j < n; j++)
						if(aposta[i] == mega[j]) cont++;
					
				if(cont == 0) printf("Azarado");
				else if(cont == 1) printf("Falta de Sorte: ");
				else if(cont == 2) printf("Dupla: ");
				else if(cont == 3) printf("Terno: ");
				else if(cont == 4) printf("Quadra: ");
				else if(cont == 5) printf("Quina: ");
				else if(cont == 6) printf("Sena: ");

				for(i = 0; i < n; i++)
					for(j = 0; j < n; j++)
						if(aposta[i] == mega[j]) printf("%d ", aposta[i]);
			}
			
		}
		
	}
	
	
	
	return 0;
}