#include <stdio.h>

/* Incremento de precio.
El programa calcula el precio total de un producto en pesos, incluyendo el impuesto
si aplica, dependiendo de su precio en dólares.

precioD y precioP: variables de tipo real. */

void main(void)
{
    float precioD = 0.0; // valor del artículo en dólares
    float precioP = 0.0; // valor del artículo en pesos
    float cambio = 60.0; // cantidad de pesos por dólar
    float cantidadPagar = 0.0; // precio total a pagar
    float impuesto = 0.0; // impuesto a pagar

    printf("\n\nPROGRAMA DE CÁLCULO DE IMPUESTO DE PRODUCTOS ONLINE\n");

    printf("Ingrese el precio del artículo en dólares: ");
    scanf("%f", &precioD);

    // Calcular el precio en pesos
    precioP = precioD * cambio;

    // Calcular el impuesto y el total a pagar
    if (precioD > 200.00) {
        impuesto = precioP * 0.18;
        cantidadPagar = precioP + impuesto;
    } else {
        impuesto = 0.0;
        cantidadPagar = precioP + impuesto;
    }

    // Mostrar resultados
    printf("\nPrecio del artículo en pesos: %.2f", precioP);
    printf("\nImpuesto aplicado: %.2f", impuesto);
    printf("\nCantidad total a pagar: %.2f\n", cantidadPagar);
}
