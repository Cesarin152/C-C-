/*
Punteros a funciones como argumentos


Otra forma de utilizar un puntero de función es pasarlo como argumento a otra función.
Un puntero de función utilizado como argumento se denomina a veces función de devolución de llamada porque la función receptora lo "devuelve".
La función qsort() del archivo de cabecera stdlib.h utiliza esta técnica.

Quicksort es un algoritmo muy utilizado para ordenar un array. Para implementar la ordenación en su programa, 
sólo necesita incluir el archivo stdlib.h y luego escribir una función de comparación que coincida con la declaración utilizada en qsort

void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *)) 

Para desglosar la declaración de qsort:
void *base Un puntero void al array.
size_t num El número de elementos del array.
size_t width El tamaño de un elemento.
int (*compare (const void *, const void *) Un puntero a la función que tiene dos argumentos y 
devuelve 0 cuando los argumentos tienen el mismo valor, <0 cuando arg1 es anterior a arg2, y >0 cuando arg1 es posterior a arg2.

La implementación real de la función de comparación depende de ti. Ni siquiera es necesario que tenga el nombre de "compare".
Tienes la oportunidad de designar una ordenación de mayor a menor o de menor a mayor, o si un array contiene elementos de estructura,
puedes comparar los valores de los miembros.

El siguiente programa ordena un array de ints de menor a mayor usando qsort

 */
#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main()
{
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;

    num = sizeof(arr) / sizeof(arr[0]);
    printf("%ld\n", num);

    width = sizeof(arr[0]);
    printf("\n\n%ld\n\n", width);
    qsort((void *)arr, num, width, compare);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}

int compare(const void *elem1, const void *elem2)
{
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}
/*
Utilizamos el nombre de la función en la llamada a qsort porque un nombre de función actúa como un puntero.
 */
