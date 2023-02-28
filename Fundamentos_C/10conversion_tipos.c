/*Conversión de tipos

Cuando una expresión numérica contiene operandos de diferentes tipos de datos, 
se convierten automáticamente según sea necesario en un proceso llamado conversión de tipos.
Por ejemplo, en una operación que incluya tanto floats como ints, el compilador convertirá los valores int a floats.
En el siguiente programa, la variable increase 'incremento' se convierte automáticamente en float: 

*/

#include <stdio.h>
/*
int main() {
    float precio = 6.50;
    int incremento = 2;
    float nuevo_precio;

    nuevo_precio = precio + incremento;
    printf("El nuevo precio es %4.2f", nuevo_precio);
    // Salida: El nuevo precio es 8,50 

    return 0;
}
*/
/* 
Observe que el especificador de formato incluye 4.2 para indicar que el flotador debe imprimirse 
en un espacio de al menos 4 caracteres de ancho con 2 decimales.
Cuando se quiere forzar el resultado de una expresión a un tipo diferente se puede realizar
 una conversión de tipo explícita mediante un casting de tipo, como en las sentencias:
*/
#include <stdio.h>

int main() {
    float average;
    int total = 23;
    int count = 4;

    average = (float) total /  count;
    
    printf("%4.2f", average);

    return 0;
}
/*
Sin la conversión de tipos, a average se le asignará 5.
La conversión explícita de tipos, incluso cuando el compilador 
puede hacer la conversión automática de tipos, se considera un buen estilo de programación.

 */