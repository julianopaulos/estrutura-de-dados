#include<stdio.h>
#include<stdlib.h>

int main(){
	int line, column, player = 1;
	char game[3][3];
	
	for(int i = 0; i < sizeof(game)/sizeof(game[0]); i++){
		for(int j = 0; j < sizeof(game[0])/sizeof(game[0][0]); j++){
			game[i][j] = ' ';
		}
	}
	
	printf("\t\t 0   1    2\n");
	printf("\t\t   |   |\n");
	for(int i = 0; i < sizeof(game)/sizeof(game[0]); i++){
		printf("\t%i\t", i);
		for(int j = 0; j < sizeof(game[0])/sizeof(game[0][0]); j++){
			if(j == sizeof(game[i])/sizeof(game[0][0]) - 1){
				printf("_%c_", game[i][j]);
			}else{
				printf("_%c_|", game[i][j]);
			}
		}
		printf("\n");
	}
	printf("\t\t   |   |\n");
	do{
		printf("digite a linha e a coluna que deseja jogar: ");
		scanf("%d%d", &line, &column);
	}while(line < 0 || line > 2 || column < 0 || column > 2 || game[line][column] != ' ');
	
	if(player == 1){
		game[line][column] = '0';
		player = 2;
	}else{
		game[line][column] = 'X';
		player = 1;
	}
	
	if(
		game[0][0] == '0' && game[0][1] == '0' && game[0][2] == '0'
		|| game[1][0] == '0' && game[1][1] == '0' && game[1][2] == '0'
		|| game[2][0] == '0' && game[2][1] == '0' && game[2][2] == '0'
		|| game[0][0] == '0' && game[1][1] == '0' && game[2][2] == '0'
		|| game[0][2] == '0' && game[1][1] == '0' && game[2][0] == '0'
		|| game[0][0] == '0' && game[1][0] == '0' && game[2][0] == '0'
		|| game[0][1] == '0' && game[1][1] == '0' && game[2][1] == '0'
		|| game[0][2] == '0' && game[1][2] == '0' && game[2][2] == '0'
		
	){
		printf("\n Parabens, o jogador 1 venceu\n");
		
	} else if (
		game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'X'
		|| game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X'
		|| game[2][0] == 'X' && game[2][1] == 'X' && game[2][2] == 'X'
		|| game[0][0] == 'X' && game[1][1] == 'X' && game[2][2] == 'X'
		|| game[0][2] == 'X' && game[1][1] == 'X' && game[2][0] == 'X'
		|| game[0][0] == 'X' && game[1][0] == 'X' && game[2][0] == 'X'
		|| game[0][1] == 'X' && game[1][1] == 'X' && game[2][1] == 'X'
		|| game[0][2] == 'X' && game[1][2] == 'X' && game[2][2] == 'X'
	){
		printf("\n Parabens, o jogador 2 venceu\n");
	} else {
		printf("\n O jogo terminou empatado\n");
	}
}
