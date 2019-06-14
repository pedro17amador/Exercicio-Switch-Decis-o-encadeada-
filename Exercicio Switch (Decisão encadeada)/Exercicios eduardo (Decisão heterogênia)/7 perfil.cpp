#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int data_nasc,data_nasc1,calculo;
	
	printf("\tAlgoritmo mostra o perfil da pessoa");
	printf("\nDigite os dois primeiros digitos do ano em que você nasceu:\n");
	scanf("%d",&data_nasc);	
	printf("\nDigite os dois ultimos digitos do ano em que nasceu:\n");
	scanf("%d",&data_nasc1);	
	
	calculo = (data_nasc + data_nasc1)%5;
	
	switch(calculo){
		case 0: 
			printf("Seu perfil indica que você é tímido\n");
			break;
		case 1:
			printf("Seu perfil indica que você é sonhador\n");
			break;
		case 2:
			printf("Seu perfil indica que você é paquerador\n");
			break;
		case 3: 
			printf("Seu perfil indica que você é atraente\n");
			break;
		case 4:
			printf("Seu perfil indica que você é irresistível\n");
			break;
		default:
			printf("Opção invalida!!!\n");
			break;
	}
	

	system("PAUSE");
	return 0;	
}
