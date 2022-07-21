#include<stdio.h>
#include<stdlib.h>

int main(){
	char game[3][3];
	
	for(int i = 0; i < sizeof(game)/sizeof(game[0]); i++){
		for(int j = 0; j < sizeof(game[0])/sizeof(game[0][0]); j++){
			game[i][j] = ' ';
		}
	}
	
	printf("\t\t 0   1    2\n");
	printf("\t\t   |   |\n");
	for(int i = 0; i < sizeof(game)/sizeof(game[0]); i++){
		printf("\t\t");
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
}
