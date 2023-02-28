/*
Punteros y matrices


Los punteros son especialmente útiles con los arrays. Una declaración de matriz reserva un bloque de direcciones de memoria contiguas para sus elementos. 
Con los punteros, podemos apuntar al primer elemento y luego utilizar la aritmética de direcciones para recorrer el array:
+ se utiliza para avanzar a una posición de memoria
- se utiliza para retroceder a una posición de memoria

Considere el siguiente programa:
 */
#include <stdio.h>

int main() {
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;
    
    ptr = a;
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));//*(ptr + i)) Esto seria igual a ptr[i]
    }
}
/*
La salida del programa es: 22 33 44 55 66

Un concepto importante con los arrays es que un nombre de array actúa como un puntero al primer elemento del array. Por lo tanto, la sentencia ptr = a puede ser considerada como ptr = &a[0].
Considere la siguiente sentencia, que imprime el primer elemento del array: printf("%d ", *a);
 */