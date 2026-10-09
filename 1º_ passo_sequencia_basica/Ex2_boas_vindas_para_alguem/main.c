#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    char nome[50];
    
	printf("Qual seu nome? ");
	scanf("%[^\n]", nome);
	//" %[^\n]", faz ler todas a linha, inclusive o espaço para um nome composto
	//fgets(nome, sizeof(nome), stdin); 
	
	printf("ola %s e um prazer te conhecer!", nome );

	return 0;
}
