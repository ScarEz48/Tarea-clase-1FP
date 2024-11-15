#include <stdio.h>

/* Primos
El programa almacena en un arreglo unidimensional los primeros 100 numeros primos. */

const int TAM = 100;

void Imprime(int, int);         /* Prototipo de funciones. */
void Primo (int, int *);

void main (void)
{
    int P[TAM] = {1 ,2};
    int FLA, J = 2, PRI = 3;
    while (J <= TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA); /* Se llama a la funcion que determina si PRI es primo. */
        if (FLA)          /* Si FLA es 1, entonces PRI es primo. */
        {
            p[J] = PRI;
            J++;
        }
        PRI += 2;
    }
    Imprime(P, TAM);
}

void Primo (int A, int *B)
/* Esta funcion determina si A es primo, en cuyo caso el valor de *B no se altera. */
{
    int D1 = 3;
    while (*B && (D1 < (A / 2)))
    {
        if ((A % D1) == 0)
            *B = 0;
        DI++;
    }
}

void Imprime(int Primos [], int T)
/* Esta funcion Imprime el arreglo unidimensional de numeros primos. */
{
    int I;
    for (I=0; I<T; I++)
        printf("\nPrimos[%d]:  %d", I, Primos[I]);
}
