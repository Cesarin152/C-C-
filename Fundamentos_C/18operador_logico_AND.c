/*
Operadores lógicos


Los operadores lógicos "&&=and" y "||=or" se utilizan para formar una expresión booleana compuesta que comprueba múltiples condiciones. 
Un tercer operador lógico es "!" que se utiliza para invertir el estado de una expresión booleana.

El operador &&

El operador lógico AND && devuelve un resultado verdadero sólo cuando ambas expresiones son verdaderas.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    int n = 42;

    if (n > 0 && n <= 100)
        printf("Range (1 - 100).\n");
}
/*
La declaración anterior une sólo dos expresiones, 
pero los operadores lógicos pueden utilizarse para unir varias expresiones.
Una expresión booleana compuesta se evalúa de izquierda a derecha. 
La evaluación se detiene cuando no se necesita ninguna otra 
prueba para determinar el resultado, así que asegúrese de tener 
en cuenta la disposición de los operandos cuando un resultado afecta al resultado de otro posterior.
 */