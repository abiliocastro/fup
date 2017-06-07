#include <stdio.h>

int main(){
    int m, n;
    
    scanf("%d", &m);
    
    int a[m], c[m];
    
    for(int i = 0; i < m; i++) scanf("%d", &a[i]);
    
    for(int i = 0; i < m; i++) c[i] = 0;

    scanf("%d", &n);
    
    int b[n];
    
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++) 
            if(a[i] == b[j]) c[i]++;
    
    for(int i = 0; i < m; i++) printf("%d ", c[i]);
            
    return 0;    
}

/* QUESTÃO
Seu trabalho como agente da S.H.I.E.L.D. continua, dessa vez você deve monitorar os agentes da HYDRA que estão infiltrados na S.H.I.E.L.D.. 

Você teve acesso aos identificadores (id, um inteiro que identifica unicamente um agente, assim como o cpf identifica unicamente uma pessoa física) desses agentes infiltrados, além disso, você consegue todo dia saber qual agente (a partir do id) envia mensagem para a sede da HYDRA. Agora você deseja saber a frequência com que cada agente infiltrado envia as mensagens.

Implemente um programa que recebe dois vetores A e B de elementos inteiros. O vetor A irá conter os identificadores dos agentes. O vetor B irá conter a ordem os agentes (a partir do id) que enviam mensagem para a HYDRA por dia. Você deve criar um vetor C, de mesmo tamanho de A que irá possui a quantidade de ocorrências dos elementos de A em B.


A primeira entrada será o tamanho do vetor A, depois serão os elementos de A. Depois será o tamanho do vetor B e os seus elementos.

Você obrigatoriamente deve criar o vetor C e armazena as quantidades de vezes que os elementos de A ocorrem em B, e só depois que irá imprimir o vetor C.

Entrada:

8

10 5 20 9 4 12 1 3

15

10 5 20 9 4 12 10 20 4 5 1 3 10 12 3

Saída:

3 2 2 1 2 2 1 2
*/