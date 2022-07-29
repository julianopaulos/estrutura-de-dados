#include <stdio.h>

int main(){
	int numberOfLines;
	
	printf("digite a quantidade de linhas: ");
	scanf("%i", &numberOfLines);
	int num = numberOfLines;
	for(int i = 1; i <= numberOfLines; i++){
		
		for(int l = 0; l < num; l++){
			printf(" ");
		}
		for(int j = i; j > 0; j--){
			printf("*");
		}
		num --;
		printf("\n");
	}
}
