#include <stdio.h>
#include <stdlib.h>

/*Cuenta numero
El programa, al recibir como datos un arreglo unidemensional de tipo entero y un numero entero, determina cuantas veces se encuentra el
numero en el arreglo. */

void main (void)
{
    int I, NUM, CUE = 0;
    int ARRE[100];          /* Declaracion del areglo */
    for (I=0; I<100; I++)
    {
        printf("Ingrese el elemento %d del areglo: ", I+1);
        scanf("%d", &ARRE[I]);          /* Lectura asignacion del areglo */
    }
    printf("\n\nIngrese el numero que se va a buscar en el areglo: ");
    scanf("%d", &NUM);
    for (I=0; I<100; I++)
    if (ARRE [I] == NUM)    /*Comparacion del numero con los elementos del areglo */

    CUE++;
    printf("\n\nEl %d se encuentra %d veces en el areglo", NUM, CUE);
}
