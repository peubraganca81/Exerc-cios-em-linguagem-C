#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int id, fal, eced;
	
	printf("qual sua idade? ");
	scanf("%d", &id);
	
	fal = 18 - id;
	
	if(fal == 0){
		
		printf("voce deve se alistar imediatamente");
	
	}else{
	
	    if(id < 18){
		
		printf("voce tem %d anos para se alistar", fal);
	
	    }else{
	
	    	eced = id- 18;
		    printf("voce perdeu o prazo a %d anos", eced);
	
	    }
	
	}
	return 0;
}
