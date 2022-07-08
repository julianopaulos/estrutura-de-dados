#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define length 4

int main(){
	int matriz[length][length] = {16, 3, 2, 13, 5, 10, 11, 8, 9, 6, 7, 12, 4, 15, 14, 1};
	int row, column, total, sum;
	bool isSquare = true;
	
	sum = 0;
	for(row = 0; row < length; row++){
		sum += matriz[row][row];
	}
	
	printf("diagonal principal: %d\n", sum);
	
	total = sum;
	sum = 0;
	for(row = 0; row < length; row++){
		sum += matriz[row][length - 1 - row];
	}
	
	printf("diagonal secundária: %d\n", sum);
	
	if(sum != total){
		isSquare = false;
		printf("diagonal secundária com valor diferente\n");
	}
	
	for(row = 0; row < length; row++){
		sum = 0;
		for(column = 0; column < length; column++){
			sum += matriz[row][column];
		}
		printf("valor da linha %d eh: %d\n", row, sum);
		
		if(sum != total){
			isSquare = false;
			printf("valor da linha %d difere das demais\n", row);
		}
	}
	
	for(row = 0; row < length; row++){
		sum = 0;
		for(column = 0; column < length; column++){
			sum += matriz[column][row];
		}
		printf("valor da coluna %d eh: %d\n", column, sum);
		
		if(sum != total){
			isSquare = false;
			printf("valor da coluna %d difere das demais\n", column);
		}
	}
	
	if(isSquare){
		printf("eh um quadrado magico\n");
	}else{
		printf("nao eh um quadrado magico\n");
	}
	
	
	system("pause");
}
