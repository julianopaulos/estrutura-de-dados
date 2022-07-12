#include<stdio.h>
#include<stdlib.h>

int main(){
	char array[9] = {""}, matriz[3][3] = {""}, lastValue = '0', winner = '0';
	int position, count = 0;
	bool isEqualValues = false;
	
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
			printf("_%c_|", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		if(i > 0){
			printf("value count: %d, lastvalue: %c, atual value: %c", i, lastValue, matriz[i][i]);
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
	}
}
