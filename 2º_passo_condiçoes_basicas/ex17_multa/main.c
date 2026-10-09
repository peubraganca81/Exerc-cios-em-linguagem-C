#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int vel ;
	float multa ;
	
	printf("qual velocidade atual do carro? ");
	scanf("%d", &vel);
	
	if(vel >= 81){
		multa = (vel - 80) * 5;
		printf("voce sera multado no valor de %.2f reais", multa);
	}else{
		printf("voce esta no limite da via, parabens!");
	}
	
	
	return 0;
}
