#ifndef FUNCIONES_H
#define FUNCIONES_H
#define MAX_LIBROS 20
typedef struct {
    int id;
    char titulo[100];
    char autor[50];
    int anio;
    char estado[20];
} Libro;

void inicializarBiblioteca(Libro biblioteca[], int *cantidad);
void registrarLibro(Libro biblioteca[], int *cantidad);
void mostrarLibros(Libro biblioteca[], int cantidad);
void buscarLibro(Libro biblioteca[], int cantidad);
void actualizarEstado(Libro biblioteca[], int cantidad);
void eliminarLibro(Libro biblioteca[], int *cantidad);

#endif