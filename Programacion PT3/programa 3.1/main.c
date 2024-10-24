#include <stdio.h>
#include <stdlib.h>

/*Nomina
El programa, al recibir los salarios de 15 profesores, obtiene el total de la nomina de la universidad.

I: variables de tipo entero.
SAL y NOM: variable de tipo real. */

void main (void)
{
    int I;
    float SAL, NOM;
    NOM = 0;
    for (I=1; I<=15; I++)
    {
        printf("Ingrese el salario del profesor%d: \t", I);
        scanf("%f", &SAL);
        NOM = NOM + SAL;

    }
    printf("\nEl totald e la nomina es: %.2f", NOM);
}
