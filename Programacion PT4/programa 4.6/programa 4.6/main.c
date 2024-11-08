#include <stdio.h>

/* Prueba de parametros por referencia. */

void f1 (int *);
/* Prototipo de funcion, EL parametro es de tipo entero y por referencia
    observa el uso del operador de indireccion */

    void main (void)
    {
        int I, K = 4;
        for (I = 1; I <= 3; I++)
        {
            printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
            printf("\n\nValor de K despues de llamar a la funcion: %d",(&K));
            /* Llamada a la funci�n f1. Se pasa la direcci�n de la variable K,
                por medio del operador de direcci�n: &. */
        }
    }
void f1 (int *R)
/* La funcion f1 recibe un parametro por referencia. cada vez que el
parametro se utiliza en la funcion debe ir precedido por el operador de
indireccion. */
{
    *R += *R;
}
