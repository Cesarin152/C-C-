/*
¡El ! Operador


El operador lógico NOT devuelve lo contrario de su valor.
NOT true devuelve false, y NOT false devuelve true.

Por ejemplo:
 */
#include <stdio.h>

int main() {
    char n = 'V';
    
    if (!(n == 'x' || n == 'X'))
        printf("Roman numeral is not 10.\n");
    else
        printf("Nothing");
    return 0;
}

//!En C, cualquier valor distinto de cero se considera verdadero y un 0 es falso. 
//El operador lógico NOT, por tanto, convierte un valor verdadero en 0 y un valor falso en 1.