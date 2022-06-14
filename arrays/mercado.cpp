#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	float prices[10], total = 0, comission = 0, salary = 1100;
	int soldQuantity[10], i, bestSellingProduct = 0, quantityBestSellingProduct = 0;
	char products[10][20] = {"arroz", "batata", "perfume", "shampoo", "leite", "cenoura", "banana", "carne", "iogurte", "vinho"};
	
	for(i = 0; i < sizeof(products)/sizeof(products[0]); i++){
		printf("digite o valor do produto %s: ", products[i]);
		scanf("%f", &prices[i]);
		
		printf("digite a quantidade vendida do produto %s: ", products[i]);
		scanf("%i", &soldQuantity[i]);
		
		if(soldQuantity[i] > quantityBestSellingProduct){
			bestSellingProduct = i;
			quantityBestSellingProduct = soldQuantity[i];
		}
		
		total += prices[i] * soldQuantity[i];
		comission += (prices[i] * soldQuantity[i] * 5) / 100;
	}
	
	printf("\n");
	
	for(i = 0; i < sizeof(products)/sizeof(products[0]); i++){
		printf("o produto %s, com o preco unitario de R$ %.2f", products[i], prices[i]);
		printf(" teve %i quantidades vendidas, tendo o valor total de R$%.2f\n", soldQuantity[i], soldQuantity[i] * prices[i]);
	}
	
	printf("\n\nO valor total dos produtos vendidos foi de R$%.2f,", total);
	printf(" e a comissao paga ao vendedor foi de R$%.2f, deixando o salario em R$%.2f\n\n", comission, comission+salary);
	printf("O produto mais vendido foi o %s, com %i unidades\n\n", products[bestSellingProduct], quantityBestSellingProduct);
	
	return 0;
}
