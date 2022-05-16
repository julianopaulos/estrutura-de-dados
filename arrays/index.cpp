#include<stdio.h>

int main(){
	int age;
	char gender;
	float n1;
	
	int num1[10];
	int num2[] = {1, 5, 7, 2, 10};
	int num3[5] = {1, 2, 3, 4, 5};
	//dentro do colchete fica o tamanho do array
	//int num4[5] = {1, 2, 3, 4, 5, 6};
	
	char letters[100];
	char vogals[5] = {'a', 'e', 'i', 'o', 'u'};

	float notes[3] = {7.5, 3.3, 4.5};
	
	for(int i = 0; i < sizeof(vogals); i++){
		printf("%c", vogals[i]);
	}
	printf("\n");
	for(int i = 0; i < sizeof(num2)/sizeof(num2[0]); i++){
		printf("%i\n", num2[i]);
	}
	
	for(int i = 0; i < sizeof(num1)/sizeof(num1[0]); i++){
		printf("digite o valor para a posicao %i do vetor:", i);
		scanf("%i", &num1[i]);
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(num1)/sizeof(num1[0]); i++){
		printf("%i,", num1[i]);
	}
	
	return 0;
}
