#include <stdio.h>
#include <malloc.h>

int main(){
	/*
	//CONCEITO B�SICO PARA PONTEIROS
	int x = 25;
	//y est� recebendo o endere�o de mem�ria onde est� x
	int* y = &x;
	//y seta como 30 o valor da posi��o de mem�ria, o que muda o valor de x
	*y = 30;
	
	printf("posicao de memoria y: %i\n", y);
	printf("Valor atual de x: %i\n", x);
	return 0;
	*/
	
	
	//ALOCA��O DE MEM�RIA COM MALLOC
	
	
	//(int* indica que o valor ser� do tipo endere�o de mem�ria int)malloc ir� alocar a quantidade de bytes referente a um integer
	int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("y=%i, *y = %i, z = %i \n", y, *y, z);
}
