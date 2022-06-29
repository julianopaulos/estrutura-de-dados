#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int matriz[7][7], column, row;
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			matriz[i][j] = rand();
		}
		
	}
	
	row = sizeof(matriz)/sizeof(matriz[0]) - 1;
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			printf("%3d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n diagonal secundária:\n");
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = sizeof(matriz[i])/sizeof(matriz[0][0]) - 1; j >= 0; j--){
			if(j == row){
				printf("coluna [%i],  linha[%i]: %i\n", i, j, matriz[i][j]);
			}
		}
		row--;
		printf("\n");
	}
}
