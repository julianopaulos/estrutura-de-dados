#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	
	int numbers[100], sortedNumbers[100], auxiliar = 0;
	bool switched = false;
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		numbers[i] = rand() % 1000;
	}
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("posicao %i, valor: %i\n", i, numbers[i]);
	}
	
	printf("\n");
	do{
		switched = false;
		for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
			auxiliar = numbers[i+1];
			if(numbers[i] > auxiliar){
				numbers[i+1] = numbers[i];
				numbers[i] = auxiliar;
				switched = true;
			}
		}
	}while(switched);
	
	printf("ordenado:\n");
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("posicao %i, valor: %i\n", i, numbers[i]);
	}
	
	
	return 0;
}
