#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int m = n * 2;
    int a[n], b[n], c[m];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    
    int i = 0; 
    int j = 0; 
    int k = 0;
    while(i < m){
        if((a[j] < b[k]) && (j < n) && (k < n)){
            c[i] = a[j];
			printf("%d\n", c[i]);
            j++;
        }
        else{
            if(k < n){
                c[i] = b[k];
				printf("%d\n", c[i]);
                k++;  	
            }
            else{
                c[i] = a[j];
				printf("%d\n", c[i]);
                j++;
            }
        }
        i++;
    }
    
    for(int i = 0; i < m; i++){
        printf("%d ", c[i]);
    }
    
    return 0;
    
}