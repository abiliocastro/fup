#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int mat[n][n];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    int x = 0;
    for(int i = 0; i < n; i++) x += mat[0][i];
    
    int slinha = 0;
    int qmagico = 1;
    for(int i = 1; i < n; i++){ //Verifica linhas
        for(int j = 0; j < n; j++){
            slinha += mat[i][j];        
        }
        if(slinha == x){
            slinha = 0;    
        } 
        else {
            qmagico = 0;
            break;
        }
    }
    
    int scoluna = 0;
    for(int i = 0; i < n; i++){ //Verifica colunas
        for(int j = 0; j < n; j++){
            scoluna += mat[j][i];        
        }
        if(scoluna == x){
            scoluna = 0;    
        } 
        else {
            qmagico = 0;
            break;
        }
    }
    
    int sdp = 0;
    for(int i = 0; i < n; i++){ //Verifica diagonal principal
        sdp += mat[i][i];        
    }
    if(sdp != x) qmagico = 0;
   
    int sds = 0;
    for(int i = 0; i < n; i++){ //Verifica diagonal secundaria
        sds += mat[i][(n-1) - i];        
    }
    if(sds != x) qmagico = 0;
    
    if(qmagico) printf("sim\n");
    else printf("nao\n");

    return 0;    
}

/* QUESTÃO
Seu trabalho como agente da S.H.I.E.L.D. está a mil, você descobriu que uma mensagem da sede da HYDRA autorizando um ataque será dada via mensagem codificada. Essa mensagem na verdade será uma matriz quadrada de inteiro, caso essa matriz seja um quadrado mágico, será uma autorização de ataque, caso contrário será um aguarde.

Você agora deve implementa um programa que recebe uma matriz quadrada nxn e diga se ela é um quadrado mágico ou não.

Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária tem o mesmo valor.
 
Saida : "sim" se for quadrado mágico e "nao" caso contrário.
 
Entrada:
3
8 0 7
4 5 6

3 10 2

Saída: 
sim

Entrada:
3
1 2 3 
4 5 6 
7 8 9 

Saída: 
nao

*/