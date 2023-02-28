/*Sentencia While
La sentencia while se denomina estructura de bucle porque ejecuta sentencias repetidamente mientras una expresión es verdadera, haciendo un bucle una y otra vez. Tiene la forma:
while (expression) {
  statements
}
La expresión se evalúa como verdadera o falsa, y las declaraciones pueden ser una sola declaración o, más comúnmente, un bloque de código encerrado entre llaves { }.
Por ejemplo:

*/
#include <stdio.h>

int main() {
    int count = 1;
  
    while (count < 8) {
        printf("Count = %d\n", count);
        count++;
    }
    
    return 0;
}
/* 
El código anterior dará salida a la variable count 7 veces.

El bucle while evalúa una condición antes de entrar en el bucle,
haciendo posible que las sentencias while nunca se ejecuten.
!Un bucle infinito es uno que continúa indefinidamente porque la condición del bucle nunca se evalúa como falsa.
Esto puede causar un error de ejecución.
*/