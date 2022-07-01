#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int matriz[5][4], transposta[4][5];
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			matriz[i][j] = rand() % 100;
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			printf("%3d\t", matriz[i][j]);
			transposta[j][i] = matriz[i][j];
		}
		printf("\n");
	}
	
	printf("\n transposta:\n");
	for(int i = 0; i < sizeof(transposta)/sizeof(transposta[0]); i++){
		for(int j = 0; j < sizeof(transposta[i])/sizeof(transposta[0][0]); j++){
			printf("%3d\t", transposta[i][j]);
		}
		printf("\n");
	}
	
}
