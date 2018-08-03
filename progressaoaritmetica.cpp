#include <stdio.h>
#include <conio.h>

int main()
{
	int acum, cont, r, prim;
	printf("Digite o primeiro termo: ");
	scanf("%d", &prim);
	printf("Digite a razao de termos: ");
	scanf("%d", &r);
	acum = prim;
	cont = 1;
	
	printf("\n----PA----");
	while (cont <= 10) {
		printf("\n %d", acum);
		acum = acum + r;
		cont = cont + 1;	
	}

	printf("\n----PG----");
	acum = prim;
	cont = 1;
	while (cont <= 10) {
		printf("\n %d", acum);
		acum = acum * r;
		cont = cont + 1;	
	}


	getch();
	return 0;
} 
