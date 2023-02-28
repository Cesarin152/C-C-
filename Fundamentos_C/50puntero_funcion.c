/*
Punteros de función


Dado que los punteros pueden apuntar a una dirección en cualquier ubicación de memoria, también pueden apuntar al inicio del código ejecutable.
Los punteros a funciones, o punteros a funciones, apuntan al código ejecutable de una función en memoria. Los punteros a funciones pueden almacenarse en una matriz o pasarse como argumentos a otras funciones.

La declaración de un puntero a una función utiliza el * como lo haría con cualquier puntero:

tipo_de_retorno (*nombre_de_función)(parámetros)

Los paréntesis alrededor de (*nombre_de_función) son importantes. Sin ellos, el compilador pensará que la función devuelve un puntero.

Después de declarar el puntero a la función, debe asignarlo a una función.
El siguiente programa corto declara una función, declara un puntero de función,
asigna el puntero de función a la función, y luego llama a la función a través del puntero:
 */
#include <stdio.h>
void say_hello(int num_times); /* function */

int main() {
    void (*funptr)(int);  /* function pointer */
    funptr = say_hello; /* pointer assignment */
    funptr(3); /* function call */
    
    return 0;
}

void say_hello(int num_times) {
    int k;
    for (k = 0; k < num_times; k++)
        printf("Hello\n");
}
/*
El nombre de una función apunta al inicio del código ejecutable, al igual que el nombre de un array apunta a su primer elemento. 
Por lo tanto, aunque declaraciones como funptr = &say_hello y (*funptr)(3) son correctas, no es necesario incluir el operador de 
dirección & y el operador de indirección * en la asignación y la llamada a la función.
 */