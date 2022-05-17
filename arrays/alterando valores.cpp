#include<stdio.h>

void setPositionValue(int position, int array){
	printf("Digite a posicao a ser alterada: ");
	scanf("%i", &position);
	if(!array[position]){
		printf("\nPosicao nao encontrada!");
		setPositionValue(position, value, array);
	}
	printf("Digite o valor a ser inserido na posicao %i: ", position);
	scanf("%i", &array[position]);
}

int main(){
	int i, position;
	char option;
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
	
	printf("\n Deseja alterar alguma posicao do array (S/N)?\n");
	scanf("%s", &option);
	
	if(option == 'S'){
		/*printf("Digite a posicao a ser alterada: ");
		scanf("%i", &position);
		if(!numbers[position]){
			printf("\nPosicao nao encontrada!");
			return 0;
		}
		printf("Digite o valor a ser inserido na posicao %i: ", position);
		scanf("%i", &numbers[position]);*/
		setPositionValue(position, &numbers);
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Elemento da posicao %i: %i\n", i, numbers[i]);
	}
	
	return 0;
}
