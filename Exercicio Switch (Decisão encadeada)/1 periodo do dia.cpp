#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hora;
	
	printf("\tAlgoritmo mostra o periodo do dia");
	printf("\nDigite uma hora:\n");
	scanf("%f",&hora);	
	
	if(hora > 4,59 && hora < 13){
		printf("O turno do trabalho é de manhã!\n");
	}
	else{
		if(hora > 12,59 && hora < 21){
			printf("O turno do trabalho é de tarde!\n");
		}
		else{
			if(hora > 20,59 && hora < 25){
				printf("O turno do trabalho é de noite!\n");
			}
			else{
				if(hora > 0 && hora < 5){
					printf("O turno do trabalho é de noite!\n");
				}
				else{
					if(hora < 0 || hora > 24){
						printf("O dia tem o formato de 24h\n");
					}
				}	
			}
		}
	}
	

	system("PAUSE");
	return 0;	
}
