#include<stdio.h>
#include <malloc.h>

#define MAX 50

typedef int KEYTYPE;

typedef struct{
	KEYTYPE key;
} REGISTER;


typedef struct{
	REGISTER A[MAX];
	int numberElements;
} LIST;

//se não for usado endereço de memória da lista (*), será
//gerada uma nova lista (cópia) com o novo dado passado,
// ao invés de alterar uma já existente
void initList(LIST* list){
	printf("list %i", list->numberElements);
	list->numberElements = 0;
}

int getNumberElements(LIST* list){
	return list->numberElements;
}

void showList(LIST* list){
	printf("teste");
	int i;
	printf("Lista: \"");
	for(i=0; i < list->numberElements; i++){
		//mostra o registro e a sua chave
		printf("%i", list->A[i].key);
	}
	printf("\"\n");
}

int searchListElement(LIST* list, KEYTYPE key){
	int i= 0;
	
	while(i < list->numberElements){
		if(key == list->A[i].key){
			return i;
		}else{
			i++;
		}
	}
	return -1;
}

bool insertListElement(LIST* list, REGISTER reg, int i){
	int j;
	printf("tes");
	//lista cheia
	if(list->numberElements == MAX || (i < 0) || (i > list->numberElements)){
		printf("gergrfg");
		return false;
	}
	printf("teast");
	//desloca todos os registros da lista para uma posição a direita
	//para poder inserir o novo na primeira posição
	for(j = list->numberElements; j > i; j--){
		list->A[j] = list->A[j - 1];
	}
	
	//insere o registro na lista
	list->A[i] = reg;
	//incrementa a quantidade de registros da lista
	list->numberElements++;
	
	return true;
	
}

bool deleteListElement(KEYTYPE key, LIST* list){
	int pos, j;
	
	pos = searchListElement(list, key);
	
	//não encontrou item na lista
	if(pos == -1){
		return false;
	}
	
	for(j = pos; j < list->numberElements-1; j++){
		list->A[j] = list->A[j+1];
	}
	
	list->numberElements--;
	return true;
	
}

void resetList(LIST* list){
	list->numberElements = 0;
}

int main(){
	//para inicializar uma lista, só precisamos colocar o valor0
	//no número de elementos válidos
	
	LIST* list;
	//printf("\ntest %i", getNumberElements(list));
	REGISTER reg;
	reg.key = 0;
	initList(list);
	printf("test");
	insertListElement(list, reg, 1);
	
	showList(list);
	
}
