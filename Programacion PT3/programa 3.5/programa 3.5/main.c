#include <stdio.h>
#include <stdlib.h>

/*  Suma Pagos.
El programa obtiene la suma de los pagos realizados el ultimo mes.

PAG y SPA: variables de tipo real.*/

void main (void)
{
    float PAG, SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    /*observa que al utilizar la estructura do-while al menos se necesita un pagi.*/
    do
    {
        SPA =SPA + PAG;
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");
        scanf("%f", &PAG);
    }
    while (PAG);
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
