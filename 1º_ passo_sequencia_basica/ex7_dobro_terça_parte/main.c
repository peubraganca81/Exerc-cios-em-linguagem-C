#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float num, dob, trip;
	
	printf("digite um numero: ") ;
	scanf("%f", &num);
	
	dob = num * 2;
	trip = num / 3;
	
	printf("o dobro de %.0f ", num);
	printf("eh igual a %.0f ", dob);
	printf("e a terca parte eh igual a %.0f", trip);
	return 0;
}
