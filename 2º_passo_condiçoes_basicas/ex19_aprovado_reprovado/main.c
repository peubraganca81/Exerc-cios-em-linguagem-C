#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char nome[50];
	float n1, n2, med;
	
	printf("nome do aluno: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("digite a nota da sua primeira prova: ");
	scanf("%f", &n1);
	
	printf("digite a nota da sua segunda prova: ");
	scanf("%f", &n2);
	
	med = (n1 + n2)/ 2;
	
	printf("sua media final foi de: %.2f \n", med);
	
	if(med < 7.0){
		printf("estude mais pois voce esta de recuperacao!");
	}else{
		printf("parabens, voce foi aprovado!");
	}
	
	return 0;
}
