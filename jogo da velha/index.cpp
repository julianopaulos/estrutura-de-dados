#include<stdio.h>
#include<stdlib.h>

int main(){
	char array[9] = {""}, matriz[3][3] = {""}, lastValue = '0', winner = '0';
	char lastLine = '0', lastColumn = '0';
	int position, count = 0, verticalCount, horizontalCount;
	bool isEqualValues = false, isVerticalValues = false, isHorizontalValue = false;
	
	printf("Jogo da velha\n\n");
	
	printf("\t\t   |   |\n");
	printf("\t\t_0_|_1_|_2_\n");
	printf("\t\t_3_|_4_|_5_\n");
	printf("\t\t 6 | 7 | 8 \n");
	printf("\t\t   |   |\n");
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		if(i % 2 == 0){
			printf("Digite a posicao do X: ");
			scanf("%i", &position);
			array[position] = 'X';
		}else{
			printf("Digite a posicao do O: ");
			scanf("%i", &position);
			array[position] = 'O';
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			matriz[i][j] = array[count];
			count++;
		}
	}
	
	printf("\n jogadas:\n");
	printf("\t\t   |   |\n");
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		
		printf("\t\t");
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			if(j == sizeof(matriz[i])/sizeof(matriz[0][0]) - 1){
				printf("_%c_", matriz[i][j]);
			}else{
				printf("_%c_|", matriz[i][j]);
			}
		}
		printf("\n");
	}
	printf("\t\t   |   |\n");
	
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		if(i > 0){
			if(lastValue == matriz[i][i]){
				isEqualValues = true;
				winner= lastValue;	
			}else{
				isEqualValues = false;
				break;
			}
		}
		
		lastValue = matriz[i][i];
	}
	
	if(isEqualValues && winner){
		printf("O Vencedor do jogo da velha foi %c", winner);
		return 0;
	}
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		if(i > 0){
			if(lastValue == matriz[i][sizeof(matriz)/sizeof(matriz[0]) -1 - i]){
				isEqualValues = true;
				winner= lastValue;	
			}else{
				isEqualValues = false;
				break;
			}
		}
		
		lastValue = matriz[i][sizeof(matriz)/sizeof(matriz[0]) -1 - i];
	}
	
	if(isEqualValues && winner){
		printf("O Vencedor do jogo da velha foi %c", winner);
		return 0;
	}
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		horizontalCount = 0;
		verticalCount = 0;
		lastLine = '0';
		for(int j = 0; j < sizeof(matriz[i])/sizeof(matriz[0][0]); j++){
			
			if(lastLine == matriz[i][j]){
				winner = lastLine;
				horizontalCount++;
			}
			
			if(matriz[j][i] && lastColumn == matriz[j][i]){
				winner = lastColumn;
				verticalCount++;
			}
			
			lastLine = matriz[i][j];
			lastColumn = matriz[j][i];
		}
		
		lastColumn = '0';
		if(horizontalCount == 2 || verticalCount == 2){
			printf("O Vencedor do jogo da velha foi %c", winner);
			return 0;
		}
	}
	
	
	printf("O jogo da velha ficou empatado\n");
}
