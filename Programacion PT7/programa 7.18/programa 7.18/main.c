#include <stdio.h>

/* Cadena invertida resulta en forma recursiva. */

void inverso(char *);           /*Prototipo de funcion. */

void main(void)
{
    char fra[50];
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    printf("\Escribe la linea de texto en forma inversa: ");
    inverso(fra);
}

void inverso(char *cadena)
/* La funcion inverso obtiene precisamente el einverso de la cadena. La solucion presentada es simple,
pero para comprenderla es necesario tener conocimiento tanto de pilas como de recursividad. Observa que mientras no se
encuentre el caracter de terminacion de la cadena, se llama a la funcion recursiva con el aputnador al siguiente caracter
de la cadena. por otra parte, queda pendiente de ejecutar -almacenado en una pila- el caracter al cual apunta *cadena. */
{
    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}


