#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia1,mes1,ano1,dia2,mes2,ano2;
	
	printf("\tPrograma que compara duas data e apresenta na ordem crescente\n");
	printf("Digite um dia:\n");
	scanf("%d",&dia1);
	
	printf("Digite um mês:\n");
	scanf("%d",&mes1);
	
	printf("Digite um ano:\n");
	scanf("%d",&ano1);
	
	printf("\tDigite outra data.\n");
	
	printf("Digite outro dia:\n");
	scanf("%d",&dia2);
												
	printf("Digite outro mês:\n");
	scanf("%d",&mes2);
	
	printf("Digite outro ano:\n");
	scanf("%d",&ano2);
	
	if(dia1 > dia2 && mes1 > mes2 && ano1 > ano2){
		printf("Data 1 é maior");
	}
	else{
		if(dia1 > dia2 && mes1 == mes2 && ano1 == ano2){
		printf("Data 1 é maior");	
		}
		else{
			if(dia1 > dia2 || mes1 > mes2 && ano1 == ano2){
			printf("Data 1 é maior.\n");
			}
			else{
				if(dia1 == dia2 && mes1 == mes2 && ano1 == ano2){
					printf("Datas iguais.\n");
				}
				else{
					if(dia1 == dia2 && mes1 > mes2 || ano1 > ano2){
						printf("Data 1 é maior.\n");
					}
					else{
						if(dia1 == dia2 && mes1 < mes2 || ano1 > ano2){
							printf("Data 1 é maior.\n");
						}
						else{
							if(dia1 < dia2 && mes1 > mes2 && ano1 > ano2){
								printf("Data 1 é maior.\n");
							}
							else{
								if(dia1 < dia2 && mes1 < mes2 && ano1 > ano2){
									printf("Data 1 é maior.\n");
								}
								else{
									if(dia1 < dia2 || mes1 > mes2 && ano1 == ano2){
										printf("Data 1 é maior.\n");
									}
									else{
										if(dia1 == dia2 && mes1 < mes2 || ano1 > ano2){
											printf("Data 1 é maior.\n");
										}
										else{
											if(dia1 > dia2 && mes1 == mes2 && ano1 > ano2){
												printf("Data 1 é maior.\n");
											}
											else{
												if(dia1 < dia2 && mes1 == mes2 && ano1 > ano2){
													printf("Data 1 é maior.\n");
												}
												else{
													if(dia1 == dia2 && mes1 > mes2 && ano1 == ano2){
														printf("Data 1 é maior.\n");
													}
													else{
														printf("Data 2 é maior.\n");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	
	system("PAUSE");
	return 0;
}
	/*
	if(mes1 > 12 || mes2 > 12){
		printf("Voê digitou um mes maior que 12.");
	}
	else{
		if(dia1 > 31 || dia2 > 31){
			printf("Voê digitou um dia maior que 31.");
		}
		else{
			if(ano1 == 0 || ano2 == 0 || mes1 == 0 || mes2== 0 || dia1 == 0 || dia2 == 0){
				printf("Você digitou dia, mes ou ano igual a 0.");
			}
		}
	}
	*/
