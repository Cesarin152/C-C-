/*
Gestión de la memoria


Entender la memoria es un aspecto importante de la programación en C. 
Cuando se declara una variable utilizando un tipo de datos básico, 
C asigna automáticamente espacio para la variable en un área de memoria llamada pila.

Una variable int, por ejemplo, suele tener asignados 4 bytes cuando se declara. Lo sabemos por el operador sizeof:
#include <stdio.h>

int main() {
    int x;
    printf("%d", sizeof(x));
    return 0;
}
 */

/*
Como otro ejemplo, un array con un tamaño especificado se asigna 
a bloques contiguos de memoria con cada bloque del tamaño de un elemento:
#include <stdio.h>

int main() {
    int arr[10];
    printf("%d", sizeof(arr));
    return 0;
}
 */

/*
Mientras su programa declare explícitamente un tipo de datos básico 
o un tamaño de array, la memoria se gestiona automáticamente. 
Sin embargo, es probable que ya hayas querido implementar un programa 
en el que el tamaño del array no se decida hasta el tiempo de ejecución.

La asignación dinámica de memoria es el proceso de asignar y liberar memoria según sea necesario. 
Ahora puedes preguntar en tiempo de ejecución el Numero de elementos del array y luego crear un 
array con ese número de elementos. La memoria dinámica se gestiona con punteros que apuntan a bloques 
de memoria recién asignados en un área llamada el heap.

Además de la gestión automática de la memoria mediante la pila y la asignación dinámica de memoria 
mediante el heap, hay datos gestionados estáticamente en la memoria principal para las variables que persisten durante la vida del programa.
 */