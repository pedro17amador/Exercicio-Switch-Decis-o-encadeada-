#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float dinheiro,saque,saldo,emprestimo,deposito ;
	int numero;
	
	dinheiro = 10000.00;
	
	printf("\tAlgoritmo que simula um caixa eletrônico");
	
	printf("\nDigite: \n[1]=Saque, \n[2]=Emprestimo, \n[3]=Saldo, \n[4]=Deposito\n");
	scanf("%d",&numero);
	
	if(numero == 1){
		printf("Você selecionou a opcão saque.\nSeu saldo atual é de R$%.2f\n",dinheiro);
		printf("Quanto deseja sacar?\n");
		scanf("%f",&saque);
		
		saldo = dinheiro - saque;
		
		printf("Seu saldo atual é de:\n %.2f",saldo);
	}
	else{
		if(numero == 2){
			printf("Você selecionou a opcão emprestimo.\nSeu saldo atual é de R$%.2f\n",dinheiro);
			printf("Quanto deseja pegar empretado?\n");
			scanf("%f",&emprestimo);
			
			saldo = dinheiro + emprestimo;
			
			printf("Seu saldo atual é de:\n%.2f",saldo);
			printf("\nVocê está devendo:\n%.2f",emprestimo);
		}
		else{
			if(numero == 3){
			printf("Você selecionou a opcão saldo.\nSeu saldo atual é de R$%.2f\n",dinheiro);	
			}
			else{
				if(numero == 4){
					printf("Você selecionou a opcão deposito.\nSeu saldo atual é de R$%.2f\n",dinheiro);
					printf("Quanto deseja depositar?\n");
					scanf("%f",&deposito);
					
					saldo = dinheiro + deposito;
					
					printf("Seu saldo atual é de:\n %.2f",saldo);
				}
			}
		}
	}

	
	system("PAUSE");
	return 0;	
}
