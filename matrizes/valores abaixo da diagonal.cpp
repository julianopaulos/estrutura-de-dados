#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int matriz[4][4];
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			matriz[i][j] = rand();
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			printf("%3d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n diagonal:\n");
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			if(i > j){
				printf("linha [%i], coluna [%i]: %i\n", i, j, matriz[i][j]);
			}
		}
		printf("\n");
	}
	
}
