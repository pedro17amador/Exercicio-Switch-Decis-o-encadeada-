#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c;
	
	printf("Digite um número:\n");
	scanf("%d",&a);
	printf("Digite outro número:\n");
	scanf("%d",&b);
	printf("Digite mais um número:\n");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b==c){
			printf("É equilatero\n");
		}
		else{
			if(a!=b && b!=c && a!=c){
				printf("É escaleno\n");
			}
			else{
				printf("É isoceles\n");
			}
		}
	}
	else{
		printf("Não é um triângulo\n");
	}

	system("PAUSE");
	return 0;
}
