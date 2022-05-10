#include <stdio.h>
#include <malloc.h>

int main(){
	/*
	//CONCEITO BÁSICO PARA PONTEIROS
	int x = 25;
	//y está recebendo o endereço de memória onde está x
	int* y = &x;
	//y seta como 30 o valor da posição de memória, o que muda o valor de x
	*y = 30;
	
	printf("posicao de memoria y: %i\n", y);
	printf("Valor atual de x: %i\n", x);
	return 0;
	*/
	
	
	//ALOCAÇÃO DE MEMÓRIA COM MALLOC
	
	
	//(int* indica que o valor será do tipo endereço de memória int)malloc irá alocar a quantidade de bytes referente a um integer
	int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("y=%i, *y = %i, z = %i \n", y, *y, z);
}
