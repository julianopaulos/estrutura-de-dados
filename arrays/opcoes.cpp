#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	float numbers[10];
	int option = 10, i;
	
	for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("digite o valor do numero na posicao %i: ", i);
		scanf("%f", &numbers[i]);
	}
	
	printf("\n");
	
	while(option != 0){
		printf("Escolha uma das opcoes:\n");
		printf("0 - finaliza o programa\n");
		printf("1 - imprimir vetor\n");
		printf("2 - imprimir vetor na ordem inversa\n");
		scanf("%d", &option);
		
		switch(option){
			case 0:
				break;
			case 1:
				for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
					printf("posicao %i, valor %.2f \n", i, numbers[i]);
				}
			break;
			case 2:
				for(i = sizeof(numbers)/sizeof(numbers[0]) - 1; i >= 0 ; i--){
					printf("posicao %i, valor %.2f \n", i, numbers[i]);
				}
			break;
		}
		printf("\n");
	}
	
	return 0;
}
