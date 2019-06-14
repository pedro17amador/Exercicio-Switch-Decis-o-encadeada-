#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int produtos;
	
	printf("\tAlgoritmo que mostra classificação de produtos");
	printf("\nProdutos:\n[1] = Óleo \n[2] = Arroz \n[3] = Milho \n[4] = Soja \n[5] = Blusa \n[6] = Vestido\n[7] = Rexona \n[8] = Luva \n[9] = Balde\n[10] = Rodo \n[11] = Vassoura \n[12] = Escova\n[13] = Esfregão\n[14] = Espelho \n[15] = Pano\n");
	scanf("%d",&produtos);	
	
	switch(produtos){
		case 1: 
			printf("Alimento não perecível\n");
		break;
		case 2: case 3: case 4:
			printf("Alimento perecível\n");
		break;
		case 5: case 6:
			printf("Vestuário\n");
		break;
		case 7:
			printf("Higiene pessoal\n");
		break;
		case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
			printf("Limpeza e utensílios domésticos\n");
		break;
		default:
			printf("Inválido!\n");
			break;
	}
	

	system("PAUSE");
	return 0;	
}
