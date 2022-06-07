#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	
	int numbers[20], copy, end=19, i;
	
	srand(time(NULL));
	
	for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("digite a posicao %i: ", i);
		scanf("%i", &numbers[i]);
	}
	
	printf("\nVetor original\n");
	for(i = 0; i < 20; i++){
		printf("%3i",numbers[i]);
	}
	
	for(i = 0; i < 10; i++){
		copy = numbers[i];
		numbers[i] = numbers[end];
		numbers[end] = copy;
		end--;
	}
	
	printf("\nVetor modificado\n");
	for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("%3i",numbers[i]);
	}
	
	return 0;
}
