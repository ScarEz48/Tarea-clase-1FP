#include <stdio.h>

int main()
{
    float consumoLitrosPor100Km, costoPorGalon, kmRecorrer, costoTotal;
    const float litrosPorGalon = 3.78541; // Conversión de galón a litros

    // Solicitar consumo en L/100KM
    printf("Ingrese el consumo del vehiculo en L/100KM: ");
    scanf("%f", &consumoLitrosPor100Km);
    if (consumoLitrosPor100Km <= 0) {
        printf("Error: El consumo debe ser un valor positivo.\n");
        return 1;
    }

    // Solicitar costo del combustible por galón
    printf("Ingrese el costo del combustible por galon: ");
    scanf("%f", &costoPorGalon);
    if (costoPorGalon <= 0) {
        printf("Error: El costo del combustible debe ser un valor positivo.\n");
        return 1;
    }

    // Solicitar la cantidad de kilómetros a recorrer
    printf("Ingrese la cantidad de kilometros a recorrer: ");
    scanf("%f", &kmRecorrer);
    if (kmRecorrer <= 0) {
        printf("Error: La distancia debe ser un valor positivo.\n");
        return 1;
    }

    // Cálculo del costo total
    costoTotal = (kmRecorrer * consumoLitrosPor100Km / 100) * (costoPorGalon / litrosPorGalon);

    // Mostrar el costo total
    printf("El costo total del combustible para el viaje es: %.2f\n", costoTotal);

    return 0;
}
