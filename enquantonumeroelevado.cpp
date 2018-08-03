#include <stdio.h>
#include <conio.h>

int main(){
	
	int base, expo, acum, cont;
	
	printf("Digite o valor da base: ");
	scanf("%d", &base);
	printf("Digite o valor do expoente: ");
	scanf("%d", &expo);
	
	cont = 1;
	acum = 1;
	
	while(cont <= expo){
		acum = acum * base;
		cont = cont +1;
		printf("\n %d", acum);
	}
	
	printf("\nO resultado eh: %d ", acum);
	

	
	getch();
	return 0;
}
