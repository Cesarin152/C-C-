/*
Matriz de estructuras

Un array puede almacenar elementos de cualquier tipo de datos, incluyendo estructuras.
Después de declarar un array de estructuras, se puede acceder a un elemento con el Numero de índice.
El operador punto se utiliza entonces para acceder a los miembros del elemento, como en el programa:
 */
#include <stdio.h>
typedef struct
{
    int h;
    int w;
    int l;
} box;


int main()
{
    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
    int k, volume,volume2;

    for (k = 0; k < 3; k++)
    {
        volume = boxes[k].h * boxes[k].w * boxes[k].l;
        printf("box %d volume %d\n", k, volume);
    }
    return 0;
}
/*
Las matrices de estructuras se utilizan para estructuras de datos como listas enlazadas, árboles binarios, etc.
 */
