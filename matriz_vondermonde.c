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