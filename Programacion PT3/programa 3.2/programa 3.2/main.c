#include <stdio.h>
#include <stdlib.h>

/* Suma positivos.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los
enteros positivps.

I, N, NUM, SUM: variables de tipo entero. */

void main(void)
{
int I, N, NUM, SUM;
SUM = 0;
printf("Ingrese el n�mero de datos:\t");
scanf("%d", &N);
for (I=1; I<=N; I++)
{
printf("Ingrese el dato n�mero %d:\t", I);
scanf("%d", &NUM);
if (NUM > 0)
SUM = SUM + NUM;
}
printf("\nLa suma de los n�meros positivos es: %d", SUM);
}