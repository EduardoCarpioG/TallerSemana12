#include <stdio.h>
#include "funciones.h"

int main() {
    Libro biblioteca[MAX_LIBROS];
    int cantidadLibros = 0;
    int opcion;
 
    inicializarBiblioteca(biblioteca, &cantidadLibros);

    do {
        printf("\n--- Biblioteca ---\n");
        printf("1. Registrar libro\n");
        printf("2. Mostrar libros\n");
        printf("3. Buscar libro\n");
        printf("4. Actualizar estado\n");
        printf("5. Eliminar libro\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrarLibro(biblioteca, &cantidadLibros);
                break;
            case 2:
                mostrarLibros(biblioteca, cantidadLibros);
                break;
            case 3:
                buscarLibro(biblioteca, cantidadLibros);
                break;
            case 4:
                actualizarEstado(biblioteca, cantidadLibros);
                break;
            case 5:
                eliminarLibro(biblioteca, &cantidadLibros);
                break;
            case 6:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 6);

    return 0;
}