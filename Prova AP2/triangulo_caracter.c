#include <stdio.h>

int main(){
    char c;
    int n;
    
    scanf("%c", &c);
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}


/* QUESTÃO
Escreva um programa que exibe um triangulo sólido de base de tamanho n formado por um caracter. O tamanho da base do triangulo e o símbolo será informados pelo usuário, conforme exemplo abaixo:


Entrada:

*

5

Saída:

*

**

***

****

***** 

*/