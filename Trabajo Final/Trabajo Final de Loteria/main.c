#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Loterias.
El programa debera realizar y buscar entre ellos las veces que se repite el mismo. */

typedef struct
{
    int numero1;
    int numero2;
    int numero3;
} NumerosLoteria;

void grabarRegistro(const char *nombreArchivo) {
    NumerosLoteria registro;
    FILE *archivo = fopen(nombreArchivo, "ab");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    printf("Ingrese el primer numero: ");
    scanf("%d", &registro.numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &registro.numero2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &registro.numero3);

    fwrite(&registro, sizeof(NumerosLoteria), 1, archivo);
    fclose(archivo);
    printf("Registro guardado con exito.\n");
}

// Función para leer y mostrar los registros del archivo
void leerRegistros(const char *nombreArchivo) {
    NumerosLoteria registro;
    FILE *archivo = fopen(nombreArchivo, "rb");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    printf("Registros en el archivo:\n");
    while (fread(&registro, sizeof(NumerosLoteria), 1, archivo)) {
        printf("Numero1: %d, Numero2: %d, Numero3: %d\n",
               registro.numero1, registro.numero2, registro.numero3);
    }

    fclose(archivo);
}

// Función para buscar un número en el archivo y contar cuántas veces aparece
void buscarNumero(const char *nombreArchivo) {
    NumerosLoteria registro;
    int numeroBuscado, contador = 0;
    FILE *archivo = fopen(nombreArchivo, "rb"); // Apertura en modo lectura binaria

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &numeroBuscado);

    while (fread(&registro, sizeof(NumerosLoteria), 1, archivo)) {
        if (registro.numero1 == numeroBuscado ||
            registro.numero2 == numeroBuscado ||
            registro.numero3 == numeroBuscado) {
            contador++;
        }
    }

    fclose(archivo);
    printf("El numero %d aparece %d veces en el archivo.\n", numeroBuscado, contador);
}

// Menú principal
int main() {
    const char *nombreArchivo = "numeros_loteria.dat";
    int opcion;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Grabar registro\n");
        printf("2. Leer registros\n");
        printf("3. Buscar numero\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                grabarRegistro(nombreArchivo);
                break;
            case 2:
                leerRegistros(nombreArchivo);
                break;
            case 3:
                buscarNumero(nombreArchivo);
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}

