#ifdef _WIN32
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

 int _tmain(int argc, _TCHAR* argv[]) {

 	printf("\nInforme a temperatura em graus Centígrados: ");
	float vTempC;
	scanf("%f", &vTempC);

	float vTempF;
	vTempF = vTempC * 1.8 + 32;

	printf("\nA temperatura em graus Fahrenheit é: %-7.2f", (vTempF));

	printf("\n\n");
	return 0;
}
