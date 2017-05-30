#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    double vet[n];
    
    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }
    
    double soma = 0;
    
    for(int i = 0; i < n; i++){
        soma += vet[i];
    }
    
    double media;
    
    media = soma / n;
    
    for(int i = 0; i < n; i++){
       if(vet[i] < media){
           printf("%.2lf ", vet[i]);
       }
    }

    return 0;   
}

/* QUESTÃO
O Prof. Fábio Dias deseja terminar bem seu dia, para isso ele deseja saber quais as notas que estão abaixo da média das notas de uma AP.

Ajude o Prof. Fabio Dias, implemente um programa que irá receber um vetor de double representando as notas de n alunos de sua turma de FUP. Imprima as notas que estão abaixo da média nas notas da prova. Deve respeitar a ordem de entrada.

Entrada:

10

2.13 6.00 10.00 9.11 3.20 6.17 2.13 2.50 6.33 8.14 

Saída:

2.13 3.20 2.13 2.50 

Neste exemplo acima a média das notas foi 5.57.

Imprima com duas casas decimais.
*/