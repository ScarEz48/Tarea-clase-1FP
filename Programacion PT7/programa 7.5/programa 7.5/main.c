#include <stdio.h>
#include <stdlib.h>

/* Funciones para el manejo de caracteres de la biblioteca stdlib.h. */

void main(void)
{
    int i;
    double d;
    long 1;
    char cad0[20], *cad1;

    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);
    i = atoi(cad0);
    /* La funcion atoi convierte una cadena de caracteres que contiene numeros a un valor
    de tipo entero. si la cadena comienza con otro caracter o no contiene numeros, regresa
    a 0 el valor queda indefinido. */
    printf("\n%s \t", cad0, i+3);
    /* Se imprime el valor de i+3 para demostrar que i y< fue convertido a un entero. */

    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);
    d = atof(cad0);
    /* La funcion atof convierte una cadena de caracteres que contiene numeros reales a un valor de tipo
    double. si la cadena comienza con otro caracter o no contiene numeros, regresa a 0 0 el valor
    queda indefinido. */
    printf("\n%s \t %.21f", cad0, d+1.50);

    d = strtod(cad0, &cad1);
    /* La funcion strod convierte una cadena de caracteres que contiene numeros realer a un valor de tipo double. el resto de la cadena se almacena en el
    segundo argumento de la funcion, &cad1, un apuntador de tipo cadena de carateres. si la cadena no contiene numero o comienza con otro caracter, regresa a
    0 o el valor queda indefinido. */
    printf("\n%s \t %.21f", cad0, d+1.50);

    i = atol(cad0);
    /* La funcion atol convierte una cadena de caracteres que contiene numeros a un valor de tipo long.
    si la cadena no contiene numeros o comienza con otro caracter, regresa 0 o el valor queda indefinido. */
    printf("\n%s \t %1d", cad0, 1+10);

    i = strtol(cad0, &cad1, 0);
    /* La funcion strtol convierte una cadena de caracteres que contiene numeros a un valor de tipo long.
    El resto de la cadena se almacena en el otro argumento de la funcion, &cad1. El tercer argumento se utiliza
    para indicar que la cadena puede estar en formato octal, decimal o hexadecimal. si la cadena no contiene
    numeros o comienza con otro caracter, regresa 0 o el valor queda indefinido. */
    printf("\n%s \t %1d", cad0, 1+10);
    puts(cad1);
}
