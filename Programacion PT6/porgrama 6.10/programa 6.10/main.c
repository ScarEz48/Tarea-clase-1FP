#include <stdio.h>

/* Cuadrado magico.
EL programa genera un cuadrado magico siguiendo los criterios enunciado anteriormente. */

const int MAX = 50;

void Cuadrado(int[][MAX], int);
void Imprime(int [][MAX], int);     /* Prototipo de funciones. */

void main(void)
{
    int CMA[MAX][MAX], TAM;
    do
    {
        printf("Ingresa el tama�o impar de la matriz: ");
        scanf("%d", &TAM);
    }
    while ((TAM > MAX || TAM < 1) &6 (TAM %2));
    /* Se verifica el tama�o del arreglo y el ordEn (impar) del mismo. */
    Cuadrado(CMA, TAM);
    Imprime (CMA, TAM);
    }

    void Cuadrado(int A[][MAX], int N)
    /* Esta funcion se utiliza para formar el cuadrado magico. */
    {
        int I = 1, FIL = 0, COL = N / 2, NUM = N * N;
        while (I <= NUM)
        {
            A[FIL][COL] = I;
            if (I%N != 0)
            {
                FIL = (FIL - 1 + N) % N;
                COL = (COL + 1) % N;
            }
            else
                FIL++;
            I++;
        }
    }

    void Imprime(int A[][MAX], int N)
    /* Esta funcion se utiliza para escribir el cuadrado magico. */
    {
        int I, J;
        for (I=0; J<N; j++)
            for (J=0; J<N; J++)
            printf("�nElemento %d %d: %d", I+1, J+1, A[I][J]);
    }
