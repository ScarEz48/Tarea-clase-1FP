#include <stdio.h>
#include <stdlib.h>

/* Estancia
El programa, al recibir como dato la superficie de una estancia expresada
en acres, la convierte a hectareas.

ECA: variable de tipo real. */

void main (void)
{
    float ECA;
    printf("Ingrese la extension de la estancia: ");
    scanf ("%f" , &ECA);
    printf("\nExtensi�n de la estancia en hect�reas: %5.2f", ECA);
}
