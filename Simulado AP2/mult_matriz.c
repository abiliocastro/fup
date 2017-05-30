#include <stdio.h>

int main(){
    int n, m, q;
    
    scanf("%d %d %d", &n, &m, &q);
    
    int a[n][m], b[m][q], c[n][q];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            c[i][j] = 0;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            for(int k = 0; k < m; k++){
                c[i][j] += (a[i][k] * b[k][j]);    
            }
        }    
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            printf("%d ", c[i][j]);    
        }
        printf("\n");
    }
    
    return 0;   
}

/* QUESTÃO
Implemente um programa que recebe duas matrizes e crie uma terceira matriz que será a multiplicação das duas de entrada.

http://mundoeducacao.bol.uol.com.br/matematica/multiplicacao-matrizes.htm

O programa irá receber três inteiros, n,m e q que serão as dimensões das duas matrizes de entrada: Anxm e Bmxq. A matriz resultante da multiplicação será uma matriz, digamos, C de dimensão nxq.

Entrada:

2 2 2

6 7

8 9

2 3

4 5

Saída:

40 53

52 69
*/