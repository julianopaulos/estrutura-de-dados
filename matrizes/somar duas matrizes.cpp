#include<stdio.h>
#include<stdlib.h>

int main(){
	/*matriz[0] = 1, matriz[0][0] = 2...*/
	int matriz1[3][3]= {1,2,3,4,5,6,7,8,9};
	int matriz2[3][3]= {1,2,3,4,5,6,7,8,9};
	int matriz3[3][3];
	
	for(int i = 0; i < sizeof(matriz1)/sizeof(matriz1[0]); i++){
		for(int j = 0; j < sizeof(matriz1[i])/sizeof(matriz1[0][0]); j++){
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz3)/sizeof(matriz3[0]); i++){
		for(int j = 0; j < sizeof(matriz3[i])/sizeof(matriz3[0][0]); j++){
			printf("coluna [%i],  linha[%i]: %i\n", i, j, matriz3[i][j]);
		}
		printf("\n");
	}
	
	
	
}
