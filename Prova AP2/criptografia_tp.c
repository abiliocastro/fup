#include <stdio.h>
#include <string.h>

int main(){
    int n;
    
    scanf("%d ", &n);
    
    char frase[n + 1];
    
    scanf("%[^\n]", frase);
    
    int tam = strlen(frase);
    
    for(int i = 0; i < tam; i++){
        if(frase[i] == 't') frase[i] = 'p';    
        else if(frase[i] == 'e') frase[i] = 'o';    
        else if(frase[i] == 'n') frase[i] = 'l';    
        else if(frase[i] == 'i') frase[i] = 'a';    
        else if(frase[i] == 's') frase[i] = 'r';
        else if(frase[i] == 'p') frase[i] = 't';    
        else if(frase[i] == 'o') frase[i] = 'e';    
        else if(frase[i] == 'l') frase[i] = 'n';    
        else if(frase[i] == 'a') frase[i] = 'i';    
        else if(frase[i] == 'r') frase[i] = 's';
    }
    
    printf("%s", frase);
    
    return 0;    
}

/* QUESTÃO
Como um agente secreto S.H.I.E.L.D., você é o responsável por criptografar todas as mensagens enviada para os vingadores. Você decide utilizar uma criptografia chamada de Criptografia TENIS-POLAR. Você recebe uma frase e irá aplicar essa criptografia.

Nessa criptografia, para cada letra da palavra tenis que estão na frase, deve ser substituída pela sua correspondente na palavra polar. Todas as letras 't' da frase devem ser substituída pela letra 'p', todas as letras 'e' da frase devem ser substituída pela letra 'o', e assim sucessivamente, conforme tabela abaixo. O mesmo acontece com as letras da palavra polar que estão na frase. Todas as letras 'p' da frase devem ser substituída pela letra 't', todas as letras 'o' da frase devem ser substituída pela letra 'e', e assim sucessivamente, conforme tabela abaixo.

As demais letras, que não estão nas palavras tenis polar, não serão alteradas.

Tenis Polar

Suponha que a frase tenha apenas letras minusculas.

Faça um programa que receba uma frase e a codifique pelo método TENIS-POLAR.  No final imprima a frase codificada.

A primeira entrada será o tamanho frase, e a segunda será a frase a ser criptografada, conforme exemplo abaixo.

Obrigatoriamente deve-se alterar a cadeia de caracteres e não apenas imprimir diretamente.

Entrada:

71

se nao pudermos proteger a terra, pode ter certeza que iremos vinga-la.

Saída:

ro lie tudosmer tsepogos i possi, tedo pos cospozi quo asomer valgi-ni.

*/