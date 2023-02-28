/*
Uniones


Una unión permite almacenar diferentes tipos de datos 
en la misma ubicación de memoria. Es como una estructura 
porque tiene miembros. Sin embargo, una variable de unión 
utiliza la misma ubicación de memoria para todos sus miembros 
y sólo un miembro a la vez puede ocupar la ubicación de memoria.

Una declaración de unión utiliza la palabra clave union, una 
etiqueta union y llaves { } con una lista de miembros.

Los miembros de la unión pueden ser de cualquier tipo de datos, 
incluyendo tipos básicos, strings, arrays, punteros y estructuras.
Por ejemplo:
 */
#include <stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20]; 
};

int main() {
    union val test;
    test.int_num = 42;
    printf("%d", test.int_num);
    return 0;
}
/*
Después de declarar una unión, puedes declarar variables de unión. 
Incluso puede asignar una unión a otra del mismo tipo:
 */
#include <stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20]; 
};

int main() {
    union val u1;
    union val u2;
    u1.int_num = 42;
    u2 = u1;
    printf("%d", u2.int_num);
    return 0;
}
/*
Las uniones se utilizan para la gestión de la memoria. El tipo de datos del miembro más grande 
se utiliza para determinar el tamaño de la memoria a compartir y luego todos los miembros 
utilizan esta ubicación. Este proceso también ayuda a limitar la fragmentación de la memoria. 
La gestión de la memoria se discute en una lección posterior.
 */