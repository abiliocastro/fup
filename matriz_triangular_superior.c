#include <stdio.h>

int main(){
	int n, i, j;
	
	scanf("%d", &n);
	
	int matriz[n][n];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int flag = 0;
	
	for(i = 0; i < (n - 1); i++){
		for(j = (i + 1); j < n; j++){
			if(matriz[i][j] != 0){
				printf("NAO");
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}
	if(!flag) printf("SIM");
	
	return 0;
}