#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(matriz1)/sizeof(matriz1[0]); i++){
		for(int j = 0; j < sizeof(matriz1[i])/sizeof(matriz1[0][0]); j++){
			matriz1[i][j] = rand() % 100;
			matriz2[i][j] = rand() % 100;
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz1)/sizeof(matriz1[0]); i++){
		for(int j = 0; j < sizeof(matriz1[i])/sizeof(matriz1[0][0]); j++){
			printf("coluna [%i],  linha[%i] da matriz1: %i\n", i, j, matriz1[i][j]);
		}
	}
	
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz2)/sizeof(matriz2[0]); i++){
		for(int j = 0; j < sizeof(matriz2[i])/sizeof(matriz2[0][0]); j++){
			printf("coluna [%i],  linha[%i] da matriz2: %i\n", i, j, matriz2[i][j]);
		}
	}

	
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz3)/sizeof(matriz3[0]); i++){
		for(int j = 0; j < sizeof(matriz3[i])/sizeof(matriz3[0][0]); j++){
			printf("coluna [%i],  linha[%i] da matriz3: %i\n", i, j, matriz3[i][j]);
		}
	}	
	
}
