#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float reais, dolares;
	
	printf("quantos reais voce tem para viajar? ");
	scanf("%f", &reais);
	
	dolares = reais / 5.10 ;
	
	printf("voce pode compra exatamente: %.2f dolares", dolares);


	return 0;
}
