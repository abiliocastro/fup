#include <stdio.h>
#include <string.h>

int main(){
	char texto[101], palavra[51];
	
	scanf("%[^\n]", texto);
	
	int tam_t = strlen(texto);
	
	scanf(" %[^\n]", palavra);
	
	int tam_p = strlen(palavra);
	
	int cont = 0;
	int c = 0;
	for(int i = 0; i < tam_p; i++){
		for(int j = c; j < tam_t; j++){
			if(palavra[i] == texto[j]){
				c = (j + 1);  
				cont++;
				break;
			}
		}
	}
	
	if(cont == tam_p) printf("Sim");
	else printf("Nao");
	
	return 0;
}

/* QUESTÃO
Você é um agente da NSA e deseja encontrar mensagens secretas em um texto de e-mail que foi hackeado. Essas mensagens normalmente são apenas uma palavra que pode indicar uma ordem de atentado ou algo parecido.

Implemente um programa que recebe um texto de tamanho no máximo 100 e depois recebe uma palavra e você tem de indicar se nesse texto contém essa palavra sendo que as letras estão espalhados no texto mas na ordem da palavra. Imprima Sim ou Não.

Exemplo:

Entrada:

Amanha ira fazer um belo dia, otimo para fazer uma bela caminha.

bomba

Saída:

Sim
*/