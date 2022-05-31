#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	/*matriz[0] = 1, matriz[0][0] = 2...*/
	int matriz[3][3];// = {1,2,3,4,5,6,7,8,9};
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			matriz[i][j] = rand();
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			printf("coluna [%i],  linha[%i]: %i\n", i, j, matriz[i][j]);
		}
		printf("\n");
	}
	
}
