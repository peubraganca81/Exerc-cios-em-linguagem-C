#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int cig, cig_fumados, temp, temp_dias, vida_min, vida_dias;
	float ;
	 
	printf("quantos cigarros voce fuma por dia? ");
	scanf("%d", &cig);
	printf("a quantos anos voce fuma? ");
	scanf("%d", &temp);
	
	temp_dias = temp * 365;
	cig_fumados = temp_dias * cig;
	vida_min = cig_fumados * 10;
	vida_dias = vida_min / 1440;
	
	printf("voce tem %d dias a menos de vida", vida_dias);
	
	
	return 0;
}
