#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int matriz[5][7], total = 0;
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			matriz[i][j] = rand() % 100;
			total += matriz[i][j];
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			printf("coluna [%i],  linha[%i]: %i\n", i, j, matriz[i][j]);
		}
		printf("\n");
	}
	printf("\no valor total dentro da matriz e de: %i", total);
	
	
	
}
