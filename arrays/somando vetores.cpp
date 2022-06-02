#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	
	int numbers[25], numbers2[25], numbers3[25];
	
	srand(time(NULL));
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		numbers[i] = rand();
		numbers2[i] = rand();
	}
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		numbers3[i] = numbers[i] + numbers2[i];
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(numbers3)/sizeof(numbers3[0]); i++){
		printf("Elemento %i + %i da posicao %i: %i\n", numbers[i], numbers2[i], i, numbers3[i]);
	}
	system("pause");
	
	return 0;
}
