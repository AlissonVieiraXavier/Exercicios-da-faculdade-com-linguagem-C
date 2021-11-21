#include<stdio.h>
#include<locale.h>

int main(void){
	
	int fatorial(int x);
	int valor,resultado;
	setlocale(LC_ALL,"portuguese");
	
	printf("digite um numero para o calculo do valor fatorial dele: \n");
	scanf("%i",&valor);
	

	resultado = fatorial(valor);
	printf("o fatorial desse numero é: %i\n",resultado);
	
   
	return 0;
	
}

int fatorial(int x){
	
	int resultado;
	if(x==0){
		resultado=1;
		
	}else{
		resultado = x * fatorial(x - 1);
	}
	return resultado;
}

