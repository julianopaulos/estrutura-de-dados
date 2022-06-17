#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	float temperatures[12], maxTemperature = 0, minTemperature = 0;
	int maxTemperatureMonth, minTemperatureMonth;
	char months[12][20] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	
	for(int i = 0; i < sizeof(months)/sizeof(months[0]); i++){
		printf("digite a temperatura media do mes de %s: ", months[i]);
		scanf("%f", &temperatures[i]);
		
		if(i == 0){
			minTemperature = temperatures[i];
			minTemperatureMonth = i;
		}else if(temperatures[i] < minTemperature){
			minTemperature = temperatures[i];
			minTemperatureMonth = i;
		}
		
		if(temperatures[i] > maxTemperature){
			maxTemperature = temperatures[i];
			maxTemperatureMonth = i;
		}
	}
	
	printf("\n");
	
	printf("A maior temperatura do ano foi em %s, que foi de %.2f°C\n", months[maxTemperatureMonth], maxTemperature);
	printf("A menor temperatura do ano foi em %s, que foi de %.2f°C\n", months[minTemperatureMonth], minTemperature);
	
	return 0;
}
