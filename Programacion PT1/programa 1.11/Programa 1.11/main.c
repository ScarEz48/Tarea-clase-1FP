#include <stdio.h>
#include <math.h>

/* Perimetro del triangulo.
El programa, al recibir las coodenadas de los puntos P1, P2 Y P3 que
corresponden a los vertices de un triangulo, calcula su perimetro.

X1, Y1, X2, Y2, X3, Y3, LA1, LA2, LA3 y PER: variables de tipo real. */

void main (void)
{
    float X1,Y1,X2,Y2,X3,Y3,LA1,LA2,LA3,PER;
    printf("Ingrese la coordenada del punto P1:");
    scanf("%f %f", &X1, &Y1);
    printf("ingrese la coordenada del punto P2:");
    scanf("%f %f", &X2, &Y2);
    printf("Ingrese la coordenada del punto P3:");
    scanf("%f %f" , &X3, &Y3);
    LA1 = sqrt(pow(X1-X2, 2) + pow(Y1-Y2, 2));
LA2 = sqrt(pow(X2-X3, 2) + pow(Y2-Y3, 2));
LA3 = sqrt(pow(X1-X3, 2) + pow(Y1-Y3, 2));
PER = LA1 + LA2 + LA3;
printf("\nEl per�metro del tri�ngulo es: %6.3f", PER);
}