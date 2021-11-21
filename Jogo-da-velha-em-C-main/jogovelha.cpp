#include <iostream>
#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tabuleiro(char casas2[3][3]){
	    
	    system("cls");
		printf("\t %c | %c | %c \n",casas2[0][0],casas2[0][1],casas2[0][2]);
		printf("\t ------------------------\n");
		printf("\t %c | %c | %c \n",casas2[1][0],casas2[1][1],casas2[1][2]);
		printf("\t ------------------------\n");
		printf("\t %c | %c | %c \n",casas2[2][0],casas2[2][1],casas2[2][2]);
		
	}
    
int main() {

	char casas[3][3] = { {'a','b','c'},
	                     {'d','e','f'},
						 {'g','h','i'},   };
					
    
	char resposta;
	int cont_jogadas,l,c,vez = 0,i,j;
	
		
	
	do{
		cont_jogadas = 1;
		for(i=0;i<=2;i++){
		    for(j=0;j<=2;j++){
			casas[i][j] = " ";
		    }
	    }
	    do{
			tabuleiro(casas);
			printf("Digite a linha:");
			scanf("%i",l);
			printf("Digite a coluna:");
			scanf("%i",c);
			if(1<1 || c<1|| 1>3 || c>3 ){
				l=0;
				c=0;
			}else if(casas[l-1][c-1] != ' '){
				l=0;
				c=0;
			}else{
				if(vez%2==0){
					casas[l-1][c-1]= "X";
				}else{
					casas[l-1][c-1 ]= "O";
				}
				vez++;
				cont_jogadas++;
			}
			
			
			
		
	    }while(cont_jogadas<=9);
		
	    	printf("Deseja jogar novamente? [s-n]\n ");
	    	scanf("%s",&resposta);
		
    } while(resposta=="s");			

	
}
