#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int data_nasc,data_nasc1,calculo;
	
	printf("\tAlgoritmo mostra o perfil da pessoa");
	printf("\nDigite os dois primeiros digitos do ano em que voc� nasceu:\n");
	scanf("%d",&data_nasc);	
	printf("\nDigite os dois ultimos digitos do ano em que nasceu:\n");
	scanf("%d",&data_nasc1);	
	
	calculo = (data_nasc + data_nasc1)%5;
	
	switch(calculo){
		case 0: 
			printf("Seu perfil indica que voc� � t�mido\n");
			break;
		case 1:
			printf("Seu perfil indica que voc� � sonhador\n");
			break;
		case 2:
			printf("Seu perfil indica que voc� � paquerador\n");
			break;
		case 3: 
			printf("Seu perfil indica que voc� � atraente\n");
			break;
		case 4:
			printf("Seu perfil indica que voc� � irresist�vel\n");
			break;
		default:
			printf("Op��o invalida!!!\n");
			break;
	}
	

	system("PAUSE");
	return 0;	
}
