#include <stdio.h>
#include <string.h>

int main(){
	char frase[101], duplicada[201];
	
	scanf("%[^\n]", frase);
	
	int tam_f = strlen(frase);
	
	int last = 0;
	int m = 0;
	
	for(int i = 0; i < tam_f; i++){
		if(frase[i] == ' '){
			for(int j = 0; j < 2; j++){
				for(int k = last; k <= i; k++){
					duplicada[m] = frase[k];
					m++;
				}
			}
			last = i + 1;
		}
		else{
			if(i == tam_f - 1){
				for(int j = 0; j < 2; j++){
					for(int k = last; k < tam_f; k++){
						duplicada[m] = frase[k];
						m++;
					}
					duplicada[m] = ' ';
					m++;
					
				}
				duplicada[m] = '\0';
			}
		}
	}
	
	int tam_d = strlen(duplicada);
	
	printf("%s", duplicada);

	return 0;
}

/* QUESTÃO
A disfemia, conhecida popularmente como gagueira ou gaguez, é a mais comum desordem de fluência da fala, atingindo cerca de 70 milhões de pessoas em todo o mundo (dois milhões no Brasil). Os sintomas mais evidentes da gagueira são a repetição de sílabas, os prolongamentos de sons e os bloqueios dos movimentos da fala, sobretudo na primeira sílaba, no momento em que o fluxo suave de movimentos da fala precisa ser iniciado. 

http://pt.wikipedia.org/wiki/Disfemia

#####

Faça um programa que receba uma frase e imprima a
mesma frase com as palavras repetidas. A entrada é composta
apenas de minúsculas e espaços. Não existem espaços no começo
ou no final da entrada. Não aparecem dois espaços juntos.

Quando terminar essa questão, talvez queira tentar a Nao se bububula nas questões de string.

>>ola planeta terra
<<ola ola planeta planeta terra terra

>>gosto de tomate
<<gosto gosto de de tomate tomate

OBS: O RESULTADO DEVE SER COLOCADO EM OUTRA CADEIA DE CARACTERES E SÓ AÍ DEVE-SE IMPRIMIR.
*/