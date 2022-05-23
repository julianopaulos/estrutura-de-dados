#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	
	int numbers[10];
	
	
	//rand seed for number generate
	// (if seed is always the same, the numbers will be always
	//the same too)
	//srand(150);
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		numbers[i] = rand();
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Elemento da posicao %i: %i\n", i, numbers[i]);
	}
	
	return 0;
}
