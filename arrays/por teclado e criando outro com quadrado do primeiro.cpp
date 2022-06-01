#include<math.h>
#include <stdlib.h>
#include<stdio.h>

int main(){
	int i;
	
	int numbers[10];
	double numbers2[10];
	
	for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Digite o valor da posicao %i do vetor:", i);
		scanf("%i", &numbers[i]);
	}
	
	printf("\n Array 1\n");
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Elemento da posicao %i: %i\n", i, numbers[i]);
		numbers2[i] = pow(numbers[i], 2);
	}
	
	printf("\n Array 2\n");
	for(i = 0; i < sizeof(numbers2)/sizeof(numbers2[0]); i++){
		printf("Elemento da posicao %i: %.2lf\n", i, numbers2[i]);
	}
	system("pause");
	
	return 0;
}
