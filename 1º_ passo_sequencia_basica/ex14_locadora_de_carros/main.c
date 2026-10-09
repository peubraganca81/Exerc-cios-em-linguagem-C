#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float km, preco, dias;
//	int dias;
	
	printf("quantos km o carro rodou? ");
	scanf("%f", &km);
	
	printf("quantos dias voce ficou com o carro? ");
	scanf("%f", &dias);
	
	preco = km * 0.2 + dias * 90;
	
	printf("o preco total a pagar eh de: %.2f reais", preco);
	
	
	
	return 0;
}
