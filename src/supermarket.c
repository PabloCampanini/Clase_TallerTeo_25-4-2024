#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Producto {
    int id;
    char *descripcion;
    float precio;
} Producto;

char Nombres [3][20] = {"Leche Serenisima 1L", "Frutilla 500 Gr", "Arandano 125 Gr"};

int GeneradorID(int id);
Producto *CrearProducto(int id, char *descricion, float Precio);

int main() {

    return 0;
}

int GeneradorID(int id){
    return id++;
}

Producto *CrearProducto(int id, char *descricion, float Precio)
{
    Producto *producto = (Producto *)malloc(sizeof(Producto));
    producto->id = id;
    producto->descripcion = (char *)malloc((strlen()));
    producto->precio = Precio

    return producto;
}
