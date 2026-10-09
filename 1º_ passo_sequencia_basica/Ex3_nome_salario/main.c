#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char nome[50], mes[15];
	float salario;
	
	printf("o nome do funcionario: ");
	scanf("%[^\n]", nome); // "%[^\n]" usado para nome composto; & não é necessario para vetor [50]
	
	printf("diga o mes: ");
	scanf("%s", mes); // "%s" usado quando não tem espaço 
	
	printf("salario: ");
	scanf("%f", &salario);
	
//	printf("o funcionario: %s", nome);
//	printf(" teve o salario: %.2f ", salario);
//	printf("no mes de %s", mes);

    printf("o funcionario: %s \nteve o salario de: %.2f \nno mes de %s", nome, salario, mes);
	return 0;
}
