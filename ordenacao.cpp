#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	int num[]={}, i, x, temp, valor, aux=0;

	setlocale( LC_ALL, "portuguese" );



	do{
		printf("Insira o valor: ");
		scanf("%d", &valor);

		num[aux] = valor; // aux serve para posição q vai estar salvando e qntas pisoçãoes tem no vetor;

		aux++;

	}while(valor != 0 );

	for( i=0; i<aux; i++){

		for( x=i+1; x<=aux; x++ ){

			if( num[i] > num[x] ){

				temp = num[i];
				num[i] = num[x];
				num[x] = temp;
			}
		}
	}

	printf("\nA ordem crescente da numeração adicionada é: " );

	for( i=0; i<aux; i++){

		printf("%d\n", num[i] );

	}
	system("pause");
	return 0;
}

