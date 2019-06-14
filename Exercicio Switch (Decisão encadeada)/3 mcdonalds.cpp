#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int BigMac,Quarteirao,MacChicken,Cheddar_MacMelt,MacMax,pedido,acompanhamento,decisao,batata,quant_ped,i;
	float refri,bat_e_ref;
	
	printf("\tAlgoritmo que apresenta o nome do lanche conforme o número indicado\n");
	
	printf("Quantos pedidos você deseja?\n");
	scanf("%d",&quant_ped);
	
	i=0;
	while(i<quant_ped){
		
		printf("\nDigite: \n[1]=BigMac                   R$30,00\n[2]=Quarteirão               R$40,00\n[3]=MacChicken               R$40,00\n[4]=Cheddar_MacMelt          R$45,00\n[5]=MacMax                   R$50,00\n");
		scanf("%d",&pedido);
		
		batata = 15;
		refri = 11.90;
		bat_e_ref = batata + refri;
			
		switch(pedido){
			case 1: 
				printf("Você selecionou a opção BigMac\n");
				printf("Deseja acompanhamento?\n");
				printf("[1]=Sim\n[2]=Não\n");
				scanf("%d",&decisao);
					switch(decisao){
						case 1:
							printf("[1]=Batata e Coca-Cola       R$26,90\n[2]=Batata                   R$15,00\n[3]=Coca-Cola                R$11,90\n");
							scanf("%d",&acompanhamento);
							switch(acompanhamento){
								case 1:
									printf("Você selecionou a opção Batata e Coca-Cola\n");
									printf("Total da compra: R$%.2f",bat_e_ref+30);
								break;
								case 2:
									printf("Você selecionou a opção Batata\n");
									printf("Total da compra: R$%d",batata+30);
								break;
								case 3:
									printf("Você selecionou a opção Coca-Cola\n");
									printf("Total da compra: R$%.2f",refri+30);
								break;
								default:
									printf("Opção invalida!!!\n");
								break;
							}
						break;
						case 2:
							printf("Total da compra: R$30,00\n");
							
						break;	
						default:
							printf("Opção invalida!!!\n");
						break;
					}
			break;
			case 2:
				printf("Você selecionou a opção Quarteirão\n");
				printf("Deseja acompanhamento?\n");
				printf("[1]=Sim\n[2]=Não\n");
				scanf("%d",&decisao);
					switch(decisao){
						case 1:
							printf("[1]=Batata e Coca-Cola       R$26,90\n[2]=Batata                   R$15,00\n[3]=Coca-Cola                R$11,90\n");
							scanf("%d",&acompanhamento);
							switch(acompanhamento){
								case 1:
									printf("Você selecionou a opção Batata e Coca-Cola\n");
									printf("Total da compra: R$%.2f",bat_e_ref+40);
								break;
								case 2:
									printf("Você selecionou a opção Batata\n");
									printf("Total da compra: R$%d",batata+40);
								break;
								case 3:
									printf("Você selecionou a opção Coca-Cola\n");
									printf("Total da compra: R$%.2f",refri+40);
								break;
								default:
									printf("Opção invalida!!!\n");
								break;
							}
						break;
						case 2:
							printf("Total da compra: R$40,00\n");
							
						break;	
						default:
							printf("Opção invalida!!!\n");
						break;
					}
			break;
			case 3:
				printf("Você selecionou a opção MacChicken\n");
				printf("Deseja acompanhamento?\n");
				printf("[1]=Sim\n[2]=Não\n");
				scanf("%d",&decisao);
					switch(decisao){
						case 1:
							printf("[1]=Batata e Coca-Cola       R$26,90\n[2]=Batata                   R$15,00\n[3]=Coca-Cola                R$11,90\n");
							scanf("%d",&acompanhamento);
							switch(acompanhamento){
								case 1:
									printf("Você selecionou a opção Batata e Coca-Cola\n");
									printf("Total da compra: R$%.2f",bat_e_ref+40);
								break;
								case 2:
									printf("Você selecionou a opção Batata\n");
									printf("Total da compra: R$%d",batata+40);
								break;
								case 3:                                    //Como que vai somar o valor total da quantidade de todos os lanches???????
									printf("Você selecionou a opção Coca-Cola\n");
									printf("Total da compra: R$%.2f",refri+40);
								break;                                         //mudar a cor da compra efetuada
								default:
									printf("Opção invalida!!!");
								break;
							}
						break;
						case 2:
							printf("Total da compra: R$40,00\n");
							
						break;	
						default:
							printf("Opção invalida!!!\n");
						break;
					}
			break;
			case 4: 
				printf("Você selecionou a opção Cheddar_MacMelt\n");
				printf("Deseja acompanhamento?\n");
				printf("[1]=Sim\n[2]=Não\n");
				scanf("%d",&decisao);
					switch(decisao){
						case 1:
							printf("[1]=Batata e Coca-Cola       R$26,90\n[2]=Batata                   R$15,00\n[3]=Coca-Cola                R$11,90\n");
							scanf("%d",&acompanhamento);
							switch(acompanhamento){
								case 1:
									printf("Você selecionou a opção Batata e Coca-Cola\n");
									printf("Total da compra: R$%.2f",bat_e_ref+45);
								break;
								case 2:
									printf("Você selecionou a opção Batata\n");
									printf("Total da compra: R$%d",batata+45);
								break;
								case 3:
									printf("Você selecionou a opção Coca-Cola\n");
									printf("Total da compra: R$%.2f",refri+45);
								break;
								default:
									printf("Opção invalida!!!\n");
								break;
							}
						break;
						case 2:
							printf("Total da compra: R$45,00\n");
							
						break;	
						default:
							printf("Opção invalida!!!\n");
						break;
					}
			break;
			case 5:
				printf("Voê selecionou a opção MacMax\n");
				printf("Deseja acompanhamento?\n");
				printf("[1]=Sim\n[2]=Não\n");
				scanf("%d",&decisao);
					switch(decisao){
						case 1:
							printf("[1]=Batata e Coca-Cola       R$26,90\n[2]=Batata                   R$15,00\n[3]=Coca-Cola                R$11,90\n");
							scanf("%d",&acompanhamento);
							switch(acompanhamento){
								case 1:
									printf("Você selecionou a opção Batata e Coca-Cola\n");
									printf("Total da compra: R$%.2f",bat_e_ref+50);
								break;
								case 2:
									printf("Você selecionou a opção Batata\n");
									printf("Total da compra: R$%d",batata+50);
								break;
								case 3:
									printf("Você selecionou a opção Coca-Cola\n");
									printf("Total da compra: R$%.2f",refri+50);
								break;
								default:
									printf("Opção invalida!!!\n");
								break;
							}
						break;
						case 2:
							printf("Total da compra: R$50,00\n");
							
						break;	
						default:
							printf("Opção invalida!!!\n");
						break;
					}
			break;
			default:
				printf("Opção invalida!!!\n");
			break;
		}
		i++;
	}
	
	system("PAUSE");
	return 0;	

}
