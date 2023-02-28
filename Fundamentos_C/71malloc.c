/*
La función malloc

La función malloc() asigna un Numero especificado de bytes contiguos en memoria.
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr)); /*Un bloque de 10 enteros PD:Se multiplica la cantidad de enteros que se desea reservar por el tamaño que ocupan los enteros en memoria (4bytes) */
    printf("%ld\n", ptr);
    if (ptr != NULL)
    {
        *(ptr + 2) = 50; /* assign 50 to third int */
    }
    printf("3rd elem equals to %d", *(ptr + 2));
    return 0;
}
/*
malloc devuelve un puntero a la memoria asignada.
Observe que sizeof se aplicó a *ptr en lugar de int, lo que hace 
que el código sea más robusto en caso de que la declaración de *ptr 
se cambie a un tipo de datos diferente más adelante.

El problema de malloc es conocer cuántos bytes se quieren reservar. Si se quiere reservar una zona para diez enteros, habrá que multiplicar diez por el tamaño de un entero.
El tamaño en bytes de un elemento de tipo T se obtiene con la expresión
sizeof ( T)


La función malloc


La memoria asignada es contigua y puede ser tratada como un array. En lugar de utilizar corchetes [ ] 
para referirse a los elementos, se utiliza la aritmética de punteros para recorrer el array. 
Se recomienda utilizar + para referirse a los elementos del array. El uso de ++ o += cambia la dirección almacenada por el puntero.

Si la asignación no tiene éxito, se devuelve NULL. Por ello, se debe incluir código para comprobar si el puntero es NULL.

Un simple array bidimensional requiere (filas*columnas)*tamaño de(tipo de datos) bytes de memoria.

http://sopa.dis.ulpgc.es/so/cpp/intro_c/introc75.htm
 */