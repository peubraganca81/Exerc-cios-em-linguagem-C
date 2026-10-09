#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float valor, desc;
	char nome[50] , sx;
	
	printf("digite seu nome: ");
	scanf(" %[^\n]", nome);
	printf("digite seu sexo [M/F]: ");
	scanf("%s", &sx);
	
	printf("qual valor deu sua compra? ");
	scanf("%f", &valor);
	
	if(sx == 'F' || sx =='f' ){
		
		desc = valor - (valor * 13 / 100);
		
		printf("\n%s, por hoje ser seu dia, voce ganhou 13 por cento de desconto!!\n\nO valor da sua compra ficou de %.2f reais", nome, desc);
	} else {
		
		desc = valor - (valor * 5 / 100);
		
		printf("\n%s, voce ganhou 5 por cento de desconto!!\n\nO valor da sua compra ficou de %.2f reais", nome, desc);
	}
	
	return 0;
}
