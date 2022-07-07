#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define length 4
int main(){
	int matriz[length][length] = {16, 3, 2, 13, 5, 10, 11, 8, 9, 6, 7, 12, 4, 15, 14, 1};
	int rowSum, columnSum[length] = {0, 0, 0, 0};
	int mainDiagonal = 0, secundaryDiagonal = 0;
	int lastRowResult, lastColumnResult;
	bool isMagicSquare = false;
	
	srand(time(NULL));
	
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			printf("%3d\t", matriz[i][j]);
			rowSum += matriz[i][j];
			columnSum[i] += matriz[i][j];
		}
		
		if(i > 0){
			
			if(rowSum == lastRowResult){
				isMagicSquare = true;
			}else{
				isMagicSquare = false;
				printf("\nnao e um fodendo quadrado magico\n");
				return 0;
			}
			
		}
		
		lastRowResult = rowSum;
		rowSum = 0;
		
		printf("\n");
	}
	
	for(int i = 0; i < sizeof(columnSum)/sizeof(columnSum[0]); i++){
		if(i > 0){
			
			if(columnSum[i] == lastColumnResult){
				isMagicSquare = true;
			}else{
				isMagicSquare = false;
				printf("\nnao e um fodinha quadrado magico\n");
				return 0;
			}
			
		}
		lastColumnResult = columnSum[i];
	}
	
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		mainDiagonal += matriz[i][i];
	}
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		secundaryDiagonal += matriz[i][sizeof(matriz)/sizeof(matriz[0]) -1 - i];
	}
	
	if(mainDiagonal == secundaryDiagonal && mainDiagonal == lastColumnResult){
		printf("\ne um quadrado magico\n");
	}else {
		printf("\nnao e um vagabundo quadrado magico\n");
	}
}
