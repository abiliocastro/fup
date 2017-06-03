#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n;
	
	srand(time(NULL));
	
	printf("Digite o tamanho da palavra a ser gerada: ");
	scanf("%d", &n);
	while(n % 2 != 0){
		printf("Informe um tamanho par: ");
		scanf("%d", &n);
	}
	
	char palavra[n + 1];
	
	int inf = 'a';
	int sup = 'z';
	
	char vogais[5] = "aeiou";
	char v, c;
	
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			v = rand() % 5;
			palavra[i] = vogais[v];
		}
		else{
			do{
				c = inf + rand() % ((sup - inf) + 1);
			}while((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')); 
			palavra[i] = c;
		}
	}
	palavra[n] = '\0';
	
	printf("Palavra gerada!\n");
	
	int saiu[n];
	
	for(int i = 0; i < n; i++){
		saiu[i] = 0;
	}
	
	int soma = 0;
	int acertou = 0;
	do{
		soma = 0;
		acertou = 0;
		char chute;
		printf("Escolha uma letra ");
		scanf(" %c", &chute);
		for(int i = 0; i < n; i++){
			if(chute == palavra[i] && !saiu[i]) acertou = 1;
			if(chute == palavra[i] || saiu[i]){
				printf("%c ", palavra[i]);
				saiu[i] = 1;
			}
			else {
				printf("_ ");
			}
		}
		
		for(int i = 0; i < n; i++){
			soma += saiu[i];
		}
		
		printf("\n");
		
		if(!acertou){
			printf("Nao acertou\n");
		}
		
	}while(soma != n);
	
	printf("Ganhou!");
	
	return 0;
}

/* QUESTÃO
Implemente um programa que simule o jogo da forca, o usuário irá informar chutes, uma letra por vez, e o programa irá informar se existe letras na palavra ou não. Caso tenha alguma letra, o programa irá exibir a posição da letra na palavra.

Inicialmente, o usuário informa o tamanho da palavra que deseja acertar, sendo esse tamanho n par.

O programa irá gerar uma palavra aleatoriamente, respeitando as seguintes regras:

As letras nos índices pares (considerando o índice 0 como sendo par) serão as não vocais e as letras de índices impares serão as vogais. Pode ser que essa palavra não seja uma palavra válida. Exemplo de uma palavra gerada: copalo

Após o programa gerar essa palavra, o jogo irá iniciar, onde o programa irá exibir n traços na tela. O usuário irá informar seu chute, apenas uma letra, e o programa irá informar se não acertou nenhuma letra ou caso tenha acertado uma letra, ele deve exibir essa letra na posição da palavra.

Exemplo de execução do programa:

-----------------------------------------------------------------------------------------------------------------------------------

Inicio do Jogo da Forca

Informe o tamanho da palavra: 6

_ _ _ _ _ _

Qual o seu chute: a

_ _ _ a _ _

Qual o seu chute: b

Não acertou

_ _ _ a _ _

Qual o seu chute: o

_ o _ a _ o

Qual o seu chute: l

_ o _ a l o

Qual o seu chute: m

Não acertou

_ o _ a l o

Qual o seu chute: p

_ o p a l o

Qual o seu chute: c

c o p a l o

-------------------------------------------------------------------------------------------------------------------------

Como gerar uma palavra aleatoriamente?

Use a mesma formula para gerar um número aleatoriamente, sendo que o valor do inferior e superior terão os valores da letra a e z, respectivamente:

char inferior = 'a';

char superior = 'z';

char letraAleatoriamente = (superior + rand() % (superior - inferior + 1));


OBS: Não tem casos de testes.

*/