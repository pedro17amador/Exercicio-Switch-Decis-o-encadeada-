#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int s,c,d,v,estado_civil;
	
	printf("\tAlgoritmo que apresenta estado civil");
	
	printf("\nDigite: \n[1] = S \n[2] = C \n[3] = D \n[4] = V\n");
	scanf("%d",&estado_civil);
	
	switch(estado_civil){
		case 1: 
			printf("Você selecionou a opção [S] = Solteiro(a)\n");
		break;
		case 2:
			printf("Você selecionou a opção [C] = Casado(a)\n");
		break;
		case 3:
			printf("Você selecionou a opção [D] = Divordiado(a)\n");
		break;
		case 4: 
			printf("Você selecionou a opção [V] = Viuvo(a)\n");
		break;
		default:
			printf("Opção invalida!!!\n");
		break;
	}

	system("PAUSE");
	return 0;	

}


