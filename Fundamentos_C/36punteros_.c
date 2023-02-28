/*
¿Qué es un puntero?


Los punteros son muy importantes en la programación en C porque permiten trabajar fácilmente con las ubicaciones de memoria.
Son fundamentales para las matrices, los string y otras estructuras de datos y algoritmos.
Un puntero es una variable que contiene la dirección de otra variable. En otras palabras, "apunta" a la ubicación asignada a una variable y puede acceder indirectamente a la misma.
Los punteros se declaran con el símbolo * y tienen la forma:

puntero_tipo *identificador 

tipo_puntero es el tipo de datos al que apuntará el puntero. El tipo de datos real del puntero es un Numero hexadecimal, pero cuando se declara un puntero, se debe indicar a que tipo de datos va a apuntar.
El asterisco * declara un puntero y debe aparecer junto al identificador utilizado para la variable puntero.
El siguiente programa demuestra variables, punteros y direcciones:

 */
#include <stdio.h>

int main() {
    int j = 63;
    int *p = NULL;
    p = &j; 
    
    printf("The address of j is %x\n", &j);
    printf("p contains address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);
}
/*  
Hay varias cosas que hay que notar en este programa:
- Los punteros deben ser inicializados a NULL hasta que se les asigne una ubicación válida.
- A los punteros se les puede asignar la dirección de una variable utilizando el signo ampersand &.
- Para ver a qué apunta un puntero, utilice de nuevo el *, como en *p. En este caso el * se llama operador de indirección o desreferencia. El proceso se denomina dereferenciación.

Algunos algoritmos utilizan un puntero a un puntero. Este tipo de declaración de variable utiliza **, y se le puede asignar la dirección de otro puntero, como en
int x = 12
int *p = NULL
int **ptr = NULL
p = &x;
ptr = &p;
*/