#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c;
	
	printf("Digite um n�mero:\n");
	scanf("%d",&a);
	printf("Digite outro n�mero:\n");
	scanf("%d",&b);
	printf("Digite mais um n�mero:\n");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b==c){
			printf("� equilatero\n");
		}
		else{
			if(a!=b && b!=c && a!=c){
				printf("� escaleno\n");
			}
			else{
				printf("� isoceles\n");
			}
		}
	}
	else{
		printf("N�o � um tri�ngulo\n");
	}

	system("PAUSE");
	return 0;
}
