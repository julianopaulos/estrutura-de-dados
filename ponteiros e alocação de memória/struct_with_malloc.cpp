#include <stdio.h>
#include <malloc.h>

//cria uma estrutura (parecido com uma classe
typedef struct{
	int weight;
	int height;
} WeigthHeight;

//cria constante
#define maxHeight 225

int main(){
	//indica que o endereço de memória será reservado para a estrutura
	WeigthHeight* person1 = (WeigthHeight*)  malloc(sizeof(WeigthHeight));
	//quando se usa ponteiro, se usa o -> para acessar as propriedades do objeto
	person1->weight = 80;
	person1->height = 185;
	
	printf("Peso:%i, Altura: %i.\n", person1->weight, person1->height);
	
	if(person1->height > maxHeight){
		printf("Altura acima da maxima. \n");
	}else{
		printf("Altura abaixo da maxima.\n");
	}
	
	return 0;
}
