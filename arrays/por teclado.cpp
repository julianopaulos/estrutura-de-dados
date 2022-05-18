#include<stdio.h>

int main(){
	int i;
	
	int numbers[10];
	
	char letters[100];
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Digite o valor da posicao %i do vetor:", i);
		scanf("%i", &numbers[i]);
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Elemento da posicao %i: %i\n", i, numbers[i]);
	}
	
	return 0;
}
