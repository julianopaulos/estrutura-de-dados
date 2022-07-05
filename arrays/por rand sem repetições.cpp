#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int numbers[25], i = 0;
	bool equal = true;
	
	srand(time(NULL));
	
	do{
		numbers[i] = rand() % 50;
		equal = false;
		
		for(int j = 0; j < i; j++){
			if(numbers[j] == numbers[i]){
				equal = true;
				break;
			}
		}
		
		if(!equal){
			i++;
		}
		
	} while(i < sizeof(numbers)/sizeof(numbers[0]));
	
	printf("\n");
	for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		printf("Elemento da posicao %i: %i\n", i, numbers[i]);
	}
	
	system("pause");
	
	return 0;
}
