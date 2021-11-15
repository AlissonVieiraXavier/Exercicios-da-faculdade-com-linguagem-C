#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>



float calcmedia(float a,float b,float c, float d){
	float media = (a+b+c+d)/4;
	return media; 
	
}
float verificamedia(float valorFinal){
	if (valorFinal >= 70,00){
		printf("\nAprovado!");
	}
	else if(valorFinal <= 69,99){
		printf("\nSinto muito, você não atingiu a média necessaria.");
	}
	else{printf("\nDeve ter ocorrido algo errado, favor contate o responsavel por esse software.");
	}
	
}


int main() {
    float nota1,nota2,nota3,nota4,media,mensagemFinal;
    setlocale(LC_ALL,"portuguese");
    
    printf("Favor digite as notas em sequencia:  \n");
	printf("Digite a nota:\n");
    scanf("%f",&nota1);
    
    printf("Digite a nota:\n");
    scanf("%f",&nota2);
    
    printf("Digite a nota:\n");
    scanf("%f",&nota3);
    
    printf("Digite a nota:\n");
    scanf("%f",&nota4);
    
    media = calcmedia(nota1,nota2,nota3,nota4);
    
    printf("Sua média é:  %f",media);
    
    mensagemFinal = verificamedia(media);
    
    
    

    


    
	return 0;
}


