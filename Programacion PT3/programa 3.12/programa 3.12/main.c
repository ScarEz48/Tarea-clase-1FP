#include <stdio.h>
#include <math.h>

/* Serie de la ULAM.
El programa al recibir como dato un entero positivo, obtiene y escribe
la serie de la ULAM.

NUM: variables de tipo entero. */

void main (void)
{
    int NUM;
    printf("Ingresa el numero para calcular la serie: ");
    printf ("%d", &NUM);
    if (NUM > 0)
    {
        printf("\nSerie de la ULAM\N");
        printf("%d \t", NUM);
        while (NUM != 1)
        {
            if (pow(-1, NUM) >0)
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1;
            printf("%d \t", NUM);
        }
    }
    else
        printf("\n NUM debe ser un entero positivo");
}
