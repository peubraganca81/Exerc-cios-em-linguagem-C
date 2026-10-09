#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int lar, alt, area, ltinta ;
	//1l de tinta pinta 2 m2
	
	printf("qual a largura da parede em metros? ");
	scanf("%d", &lar);
	printf("qual a altura da parede em metros? ");
	scanf("%d", &alt);
	
	area = lar * alt;
	
	printf("\na area a ser pintada eh igual a: %d metros\n\n", area);
	
	if(area % 2== 0){
		
		ltinta = area / 2;
		
		printf("sera necessario %d litros de tinta para pintar toda parede\n\n", ltinta);
	} else{
	
	ltinta = (area / 2);
	ltinta = ltinta + 1;
	
	printf("sera necessario %d litros de tinta para pintar toda parede\n\n", ltinta);
    }
    
	return 0;
}
