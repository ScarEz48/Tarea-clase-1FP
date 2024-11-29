#include <stdio.h>

/* Incorpora caracteres.
El programa agrega caracteres al archivo libro txt. */

void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("librp.txt", "a");
    /* Se abre el archivo con la opcion para incoorporar caracteres. */
    if (ar != NULL)
    {
        while ((p1 = getchar()) != 'N')
            fputc(p1, ar);
        fclose(ar);

    }
    else
        printf("No se puede abrir el archivo");
}
