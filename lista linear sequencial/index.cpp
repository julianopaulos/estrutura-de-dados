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

//se n�o for usado endere�o de mem�ria da lista (*), ser�
//gerada uma nova lista (c�pia) com o novo dado passado,
// ao inv�s de alterar uma j� existente
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
	//desloca todos os registros da lista para uma posi��o a direita
	//para poder inserir o novo na primeira posi��o
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
	
	//n�o encontrou item na lista
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
	//para inicializar uma lista, s� precisamos colocar o valor0
	//no n�mero de elementos v�lidos
	
	LIST* list;
	//printf("\ntest %i", getNumberElements(list));
	REGISTER reg;
	reg.key = 0;
	initList(list);
	printf("test");
	insertListElement(list, reg, 1);
	
	showList(list);
	
}
