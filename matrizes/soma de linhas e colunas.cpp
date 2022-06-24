#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int matriz[5][10], sumRows[5] = {0}, sumColumns[10] = {0}, totalRow = 0;
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		totalRow = 0;
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			matriz[i][j] = rand() % 100;
			sumColumns[j] += matriz[i][j];
			totalRow += matriz[i][j];
		}
		sumRows[i] += totalRow;
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			printf("linha [%i],  coluna[%i]: %i\n", i, j, matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	for(int i = 0; i < sizeof(sumRows)/sizeof(sumRows[0]); i++){
		printf("a soma total da linha %i foi de: %i\n", i, sumRows[i]);
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(sumColumns)/sizeof(sumColumns[0]); i++){
		printf("a soma total da coluna %i foi de: %i\n", i, sumColumns[i]);
	}
	
	
}
