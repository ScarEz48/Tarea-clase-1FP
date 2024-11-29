#include <stdio.h>
#include <stdlib.h>
/* Suma reales.
El programa lee cadenas de caracteres de un archivo, detecta aquellas que
comienzan con n�meros, los suma y calcula el promedio de los mismos. */

void sumypro(FILE *);               /* Prototipo de funci�n. */

void main(void)
{
    FILE *ap;
    if ((ap=fopen("arc2.txt", "r")) != NULL)
    {
          sumypro(ap);
          /* Se llama la funcion sumypro. se pasa el archivo ap como parametro. */
          fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");
}

void sumypro(FILE *ap1)
/* Esta funcion lee cadenas de caracteres de un archivo, detecta aquellas que comienzan con numero
, y obtienes la suma y el promedio de dichos numeros. */
{
    char cad[30];
    int i = 0;
    float sum = 0.0, r;
    while (!feof (ap1))
    {
        fgets(cad,30,ap1);          /* Se lee la cadena del archivo. */
        r = atof(cad);
        /* Recuerda que la funcion atof convierte una cdena de caracteres que contiene numeros reales a un valor de tipo double.
        si la cadena comienza con otro caracter, o no contiene numeros, regresa 0 o el valor queda indefinido. */
        if (r)
        {
            i++;
            sum += r;
        }
    }
    printf("\nSuma: %.2f", sum);
    if (i) /* su el valor de i es distinto de cero, calcula el promedio. */
        printf("\nPromedio: %.2f", sum/i);
}
