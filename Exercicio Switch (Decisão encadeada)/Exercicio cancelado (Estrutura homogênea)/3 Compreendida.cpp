#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite uma idade:\n");
	scanf("%d",&idade);
	
	if(idade > 0){
		if(idade > 9 && idade < 19){
			printf("Está compreendida!\n");
		}
		else{
			printf("Não esta compreendida!\n");
		}
	}
	else{
		printf("\tVOCÊ PROVAVELMENTE DIGITOU UMA LETRA OU ZERO. TENTE NOVAMENTE!\n");
	}
	
	system("PAUSE");
	return 0;	
}
