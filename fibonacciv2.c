// versão 2
#include <stdio.h>


int main(){

	int cont, n1, n2, n3, nrtermos;

	printf("Digite numero de termos: \n");
    scanf("%d", &nrtermos);

	n1 = 1;
	n2 = 1;
	cont = 1;

	while(cont <= nrtermos){
		printf("%d \n", n1);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		cont = cont + 1;
	}

	return 0;
}
