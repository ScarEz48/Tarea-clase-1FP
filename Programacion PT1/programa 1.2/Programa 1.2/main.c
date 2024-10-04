#include <stdio.h>
#include <stdlib.h>

/* Invierte datos
El programa al recibir como dato un conjunto de datos de entrada, invierte el
orden de los mismos cuando los imprime.

A, B, C Y D: variables de tipo entero. */

void main (void)
{
    int A, B, C, D;
    printf("ingrese cuatrp datos de tipo entero: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    printf("\n %d %d %d", D, C, B, A);
}
