#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int l1, l2, l3;
	
	// comprimento de um lado deve ser menor que a soma dos outros dois ou seja l1 + l2 > l3
	
	printf("digite o tamanho da primeira reta:");
	scanf("%d", &l1);
		
	printf("digite o tamanho da segunda reta:");
	scanf("%d", &l2);
		
	printf("digite o tamanho da terceira reta:");
	scanf("%d", &l3);
	
/*	if(l1 < l2 + l3 && l2 < l1 + l3 && l3 <l1 + l2){
		printf("eh possivel formar um triangulo com o comprimento dessas retas!");
		
	}else{
		printf("nao eh possivel formar um triangulo com essas retas!");
	}
	
	esse programa é o mais simples apenas fala se é possivel formar um triangulo, eu quero caracterizar o triangulo. obs: se tirar o comentario ele funciona
*/

//verificando se da para formar um trangulo
    if(l1 < l2 + l3 && l2 < l1 + l3 && l3 <l1 + l2){
    	
 //se possivel agora tem que classificando o triangulo
       if(l1 == l2 && l1 == l3){
       printf("triangulo equilatero!");
        }else{
	        if(l1 == l2 && l2 != l3){
    	    printf("triangulo isoceles!");
	        }else{
         	    printf("triangulo escaleno!");
 //se nao for possivel, diga que nao pode formar um triangulo
	}
	}
    }
	else{
	    printf("nao eh possivel formar um triangulo com essas retas!");
    }
    
	return 0;
}
