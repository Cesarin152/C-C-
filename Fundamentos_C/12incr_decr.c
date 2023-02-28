/* 
Incremento y disminución


Para añadir 1 a una variable se utiliza el operador de incremento ++.
Del mismo modo, el operador de disminución -- se utiliza para restar 1 a una variable.
Por ejemplo:
z--; disminuir z en 1 
y++; incrementa y en 1 
*/

/*
Los operadores de incremento y decremento pueden utilizarse como
prefijo (antes del nombre de la variable) o como postfijo (después del nombre de la variable).
La forma de utilizar el operador puede ser importante en una sentencia de asignación, 
como en el siguiente ejemplo.
*/
#include <stdio.h>

int main() {
    int x, y, z;
    
    z = 3;
    x = z--; /* asigna 3 a x, luego decrementa z a 2 */
    printf("x=%d \n", x);
    
    y = 3;
    x = ++y; /* incrementa y a 4, luego asigna 4 a x */
    
    printf("x=%d \n", x);
    
    printf("y=%d \n", y);

    return 0;
}
/*
La forma prefija incrementa/decrementa la variable y luego la utiliza en la sentencia de asignación.
La forma postfija utiliza primero el valor de la variable, antes de incrementarla/decrementarla.
 */