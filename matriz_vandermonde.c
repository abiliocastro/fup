#include <stdio.h>

int main(){
    int m, n, cont = 0;
    
    scanf("%d %d", &m, &n);
    
    int mat[m][n];
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(int i = 0; i < m; i++){
        int r = mat[i][1] / mat[i][0];
        for(int j = 0; j < (n - 1); j++){
            int d = mat[i][j+1] / mat[i][j];
            if(d == r) cont++;
        }
    }
    if(cont == (m * (n-1))) printf("SIM\n");
    else printf("NAO\n");
    
    return 0;    
}

/* QUESTÃO
Em álgebra linear, uma matriz de Vandermonde, cujo nome faz referência a Alexandre-Théophile Vandermonde, é uma matriz em que os termos de cada linha estão em progressão geométrica.

Uma matriz de Vandermonde de ordem m × n tem a forma geral:

https://pt.wikipedia.org/wiki/Matriz_de_Vandermonde


Implemente um programa que recebe uma matriz m x n e diga se essa matriz é uma matriz de Vandermonde ou não.

Entrada:

3 3

1 7 49

1 6 36

1 5 25

Saída:

SIM

Entrada:

3 4

1 2 4 16 

1 3 9 27

1 7 49 51

Saída:

NAO

*/