#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num;

	printf("digite um numero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("%d eh par\n", num);
	}else{
		printf("%d eh impar\n", num);
	}
	
	return 0;

}
