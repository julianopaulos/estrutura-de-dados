#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	char matriz[9] = {""};
	int position;
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){	
		if(i % 2 == 0){
			printf("Digite a posicao do X: ");
			scanf("%i", &position);
			matriz[position] = 'X';
		}else{
			printf("Digite a posicao do O: ");
			scanf("%i", &position);
			matriz[position] = 'O';
		}
		
	}
	printf("\n");
	
	for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
		printf("%c \t", matriz[i]);
	}
	
	/*for(int i = 0; i < sizeof(matriz)/sizeof(matriz[0]); i++){
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
	}*/
	
}
