#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,operacao,soma,subtracao,multiplicacao,divisao;
	
	printf("\tAlgoritmo que consegue ler o valor de dois n�meros e a opera��o aritm�tica desejada ");
	printf("\nDigite um n�mero:");
	scanf("%d",&n1);
	printf("\nDigite outro n�mero:");
	scanf("%d",&n2);
	printf("\tDigite a opera��o desejada para calcular os n�meros acima:\nDigite: \n[1]=Soma, \n[2]=Subtra��o, \n[3]=Multiplicac�o, \n[4]=Divis�o");
	scanf("%d",&operacao);
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	multiplicacao = n1 * n2;
	divisao = n1 / n2;
		
	switch(operacao){
		case 1:
			printf("%d",soma);
			break;
		case 2:
			printf("%d",subtracao);
			break;
		case 3: 
			printf("%d",multiplicacao);
			break;
		case 4: 
			printf("%d",divisao);
			break;
		default:	
			printf("\tAlgo deu errado. Tente novamente!");
}
	
	system("PAUSE");
	return 0;	
}
