/*
El bucle do-while

El bucle do-while ejecuta las sentencias del bucle antes de 
evaluar la expresión para determinar si el bucle debe repetirse.
Tiene la forma:
do {
  statements
} while (expression);

La expresión se evalúa como verdadera o falsa, y las declaraciones pueden ser una sola declaración o un bloque de código encerrado entre llaves { }.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    int count = 100;
  
    do {
        printf("Count = %d\n", count);
        count++;
    } while (count < 8);
    
    return 0;
} /*Observe el punto y coma después de la sentencia while.
El bucle do-while siempre se ejecuta al menos una vez, incluso si la expresión se evalúa como falsa.*/
