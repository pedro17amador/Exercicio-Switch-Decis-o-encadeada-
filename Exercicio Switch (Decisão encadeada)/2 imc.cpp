#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso,altura,imc;
	
	printf("\tAlgoritmo mostra o IMC e vê no padrão que você se encaixa");
	printf("\nDigite sua altura:\n");
	scanf("%f",&altura);
	printf("\nDigite sua peso:\n");
	scanf("%f",&peso);	
	
	imc = peso/(altura*altura);
	
	if(imc < 18){
		printf("Seu indice corporal é magreza\n");
		printf("%.2f",imc);
	}
	else{
		if(imc >= 18 && imc < 25){
			printf("Seu indice corporal é saudável\n");
			printf("%.2f",imc);
		}
		else{
			if(imc > 24,9 && imc < 30){
				printf("Seu indice corporal é sobrepeso\n");
				printf("%.2f",imc);
			}
			else{
				if(imc > 29,9){
					printf("Seu indice corporal obesidade\n");
					printf("%.2f",imc);
				}
				else{
					printf("ERROR\n");
				}	
			}
		}
	}
	

	system("PAUSE");
	return 0;	
}
