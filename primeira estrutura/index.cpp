#include <stdio.h>

//cria uma estrutura (parecido com uma classe
typedef struct{
	int weight;
	int height;
} WeigthHeigh;

//vai servir como se fosse uma "interface", pra saber o tipo de dado
//typedef int KEY;

//cria constante
#define maxHeight 225

int main(){
	WeigthHeigh person1;
	person1.weight = 80;
	person1.height = 185;
	printf("Peso:%i, Altura: %i.\n", person1.weight, person1.height);
	
	if(person1.height > maxHeight){
		printf("Altura acima da maxima. \n");
	}else{
		printf("Altura abaixo da maxima.\n");
	}
	
	return 0;
}
