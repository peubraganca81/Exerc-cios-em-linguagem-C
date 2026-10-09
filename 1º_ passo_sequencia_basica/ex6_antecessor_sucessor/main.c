#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num, ante, suce;
	
	printf("digite um numero: ");
	scanf("%d", &num);
	
    ante = num - 1;
    suce = num + 1;
	
	printf("o antecessor de %d, ", num);
	printf("eh igual a %d, ", ante);
	printf("e o sucessor eh igual a %d", suce);
	
	return 0;
}
