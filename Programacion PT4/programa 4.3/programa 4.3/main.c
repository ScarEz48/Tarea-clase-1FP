#include <stdio.h>
#include <stdlib.h>

/* Conflicto de variables con el mismo nombre. */

void f1(void);      /*Prototipo de funcion. */
int K = 5;          /* variable global. */
void main (void)
{
    int I;
    for (I = 1; I <= 3; I++)
         f1();
}
void f1 (void)
/* La funcion utiliza tanto la variable local I como la variable
global I. */
{
    int K = 2;      /* variable local. */
    K += K;
    printf("\n\n El valor de la variable local es: %d", K);
    K = K + K;       /* Uso de ambas variables. */
    printf("\n El valor de la varibale global es: %d", K);

}

