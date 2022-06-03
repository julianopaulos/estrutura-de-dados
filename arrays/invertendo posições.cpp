#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	
	int numbers[20], numbers2[20], i, numbers2_count = 0;
	
	srand(time(NULL));
	
	for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		numbers[i] = rand() %100;
	}
	
	printf("\nVetor1\n");
	for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Elemento da posicao %i: %i\n",i, numbers[i]);
	}
	
	for(i = sizeof(numbers)/sizeof(numbers[0])-1; i >= 0; i--){
		numbers2[numbers2_count] = numbers[i];
		numbers2_count++;
	}
	
	printf("\nVetor2\n");
	for(int i = 0; i < sizeof(numbers2)/sizeof(numbers2[0]); i++){
		printf("Elemento da posicao %i: %i\n", i, numbers2[i]);
	}
	system("pause");
	
	return 0;
}
