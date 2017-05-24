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