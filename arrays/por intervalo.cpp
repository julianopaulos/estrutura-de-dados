#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	
	int numbers[10];
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		numbers[i] = rand() % 99;//valor maximo de 98
		//1 + rand() % 99 - valor minimo de 1 e maximo de 99
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Elemento da posicao %i: %i\n", i, numbers[i]);
	}
	
	return 0;
}
