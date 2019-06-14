#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("\tAlgoritmo que dada a idade de um nadador classifica em uma categoria");
	printf("\nDigite sua idade:\n");
	scanf("%d",&idade);
	
	if(idade<5){
		printf("Você não está em nunhuma das categorias.\n");
	}	
	else{
		if(idade>4 && idade<8){
			printf("Categoria: Infantil A\n");
		}
		else{
			if(idade>7 && idade<11){
				printf("Categoria: Infantil B\n");
			}
			else{
				if(idade>10 && idade<14){
					printf("Categoria: Juvenil A\n");
				}
				else{
					if(idade>13 && idade<18){
						printf("Categoria: Juvenil B\n");
					}
					else{
						printf("Categoria: Senior\n");
					}
				}
	
			}
		
		}
		
	}

	system("PAUSE");
	return 0;
}
