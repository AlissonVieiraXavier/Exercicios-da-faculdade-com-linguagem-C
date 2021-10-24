
#include <stdio.h>


int main(void) {
	
    float notas[5] = {0},total = 0,media = 0;
    
   printf("\t\t\t Programa para calcular media de 5 notas \n");
   printf("\t\t\t Autor: Alisson Vieira Xavier \n");
   printf("\t\t\t Meu primeiro programa em linguagem C \n");
    
   printf("Insira as suas 5 notas esse ano; \n\n");
    
	for (int i=0; i<5;i++){
    	scanf("%f",&notas[i]);
	}
    
    media = (notas[1] + notas[2] + notas[3] + notas[4] + notas[5])/5;
    printf("Sua media nos 5 ultimos meses foi %f",media);
    
    
	
	
	return 0;
}
