#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	int table[10][10], line, column, bombs[3][3];
	
	printf("   0  1  2  3  4  5  6  7  8  9\n");
	printf("  -------------------------------\n");
	printf("0 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("1 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("2 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("3 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("4 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("5 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("6 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("7 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("8 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	printf("9 |  |  |  |  |  |  |  |  |  |  |\n");
	printf("  -------------------------------\n");
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(bombs)/sizeof(bombs[0]); i++){
		for(int j = 0; j < sizeof(bombs[i])/sizeof(bombs[0][0]); j++){
			bombs[i][j] = rand() % 10;
		}
	}
	
	for(int i = 0; i < sizeof(bombs)/sizeof(bombs[0]); i++){
		for(int j = 0; j < sizeof(bombs[i])/sizeof(bombs[0][0]); j++){
			printf("bomb position: %i\n", bombs[i][j]);
		}
	}
	
	for(int i = 0; i < sizeof(table)/sizeof(table[0]); i++){
		for(int j = 0; i < sizeof(table[i])/sizeof(table[0][0]); i++){
			
		}
	}
	
	printf("\nDigite as coordenadas: ");
	scanf("%i%i", &line, &column);
	return 0;
}
