#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float media,n1,n2,n3,n4;
	 
	printf("Digite sua primeira nota:\n");
	scanf("%f",&n1);
	printf("Digite sua segunda nota:\n");
	scanf("%f",&n2);
	printf("Digite sua terceira nota:\n");
	scanf("%f",&n3);
	printf("Digite sua quarta nota:\n");
	scanf("%f",&n4);

	media = (n1+n2+n3+n4)/4; 
	
	if(media > 9){
		printf("Sua nota foi A\nAprovado!\n");
	}
	else{
		if(media >= 7 && media <= 9){
			printf("Sua nota foi B\nAprovado!\n");
		}
		else{
			if(media >= 5 && media < 6.9){
				printf("Sua nota foi C\nAprovado!\n");
			}
			else{
				if(media > 2.5 && media < 4.9){
					printf("Sua nota foi D\nReprovado!\n");
				}
				else{
					if(media < 2.5){
						printf("Sua nota foi E\nReprovado!\n");
					}
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}
