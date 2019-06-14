#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,operacao,soma,subtracao,multiplicacao,divisao;
	
	printf("\tAlgoritmo que consegue ler o valor de dois números e a operação aritmética desejada ");
	printf("\nDigite um número:");
	scanf("%d",&n1);
	printf("\nDigite outro número:");
	scanf("%d",&n2);
	printf("\tDigite a operação desejada para calcular os números acima:\nDigite: \n[1]=Soma, \n[2]=Subtração, \n[3]=Multiplicacão, \n[4]=Divisão");
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
