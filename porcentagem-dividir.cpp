#include <stdio.h>
#include <conio.h>

int main(){
	float p1, p2, p3, valor;
	
	
	printf("Digite um valor: \n");
	scanf("%f", &valor);
	
	p1 = valor * 0.2;
	p2 = valor * 0.3;
	p3 = valor / 2;
	
	printf("O valor da pessoa eh 20%: %.2f \n", p1);
	printf("O valor da pessoa eh 30%: %.2f \n", p2);
	printf("O valor da pessoa eh 50%: %.2f \n", p3);
	
	getch();	
	return 0;
}
