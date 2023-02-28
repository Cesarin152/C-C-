/*
Arreglos dinámicos


Muchos algoritmos implementan un array dinámico porque esto permite que el Numero de elementos crezca según sea necesario.
Debido a que los elementos no se asignan todos a la vez, los arrays dinámicos suelen utilizar una estructura para mantener 
un registro del tamaño actual del array, la capacidad actual y un puntero a los elementos, como en el siguiente programa.

 */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *elements;
    int size;
    int cap;
} dyn_array;

int main()
{
    dyn_array arr;
    int i;

    /* inicializar array */
    arr.size = 0;
    arr.elements = calloc(1, sizeof(*arr.elements));
    arr.cap = 1; /* espacio para 1 elemento */

    /* ampliar en 5 elementos más */
    int prueba=sizeof(*arr.elements);
    arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
    if (arr.elements != NULL)
        arr.cap += 5; /* aumentar la capacidad */

    /* añadir un elemento y aumentar el tamaño */
    if (arr.size < arr.cap)
    {
        for (size_t i = 0; i < arr.cap; i++)//Prueba
        {
            arr.elements[i] = i+1;
            arr.size+=1;
        }
        //Añadir un elemento a la matriz aumenta su tamaño:
        //arr.elements[arr.size] = 50;/* añade un elemento al array */
        //arr.size++;//aumento el size debido a que añadi un elemento al array
    }
    else
    {
        printf("Necesito expandir el array.");
    }
    /* mostrar los elementos del array */
    for (i = 0; i < arr.cap; i++)
        printf("Elemento %d: %d\n", i, arr.elements[i]);

    return 0;
}
//Todo el programa está escrito en main() para fines de demostración. Para implementar adecuadamente un array dinámico, 
//las subtareas deben dividirse en funciones como init_array(), increase_array(), add_element() y display_array(). 
//También se ha omitido la comprobación de errores para que la demo sea corta.