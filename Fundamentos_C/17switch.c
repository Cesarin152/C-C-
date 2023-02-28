/*La sentencia switch


La sentencia switch ramifica el control del programa haciendo coincidir el resultado de una expresión con un valor constante de case.

La sentencia switch a menudo proporciona una solución más elegante que las sentencias if-else if y las anidadas if.
La sentencia switch tiene la forma

switch (expression) {
  case val1:
    statements
  break;
  case val2:
    statements
  break;
  default:
    statements
}
For example, the following program outputs "Three":

*/
#include <stdio.h>

int main() {
    int num = 3;

    switch (num) {
        case 1:
            printf("One\n");
            break; 
        case 2:
            printf("Two\n");
            break; 
        case 3:
            printf("Three\n");
            break; 
        default:
            printf("Not 1, 2, or 3.\n");
    }
    return 0;
}
/*  
La declaración de cambio


Puede haber múltiples casos con etiquetas únicas.
El caso opcional por defecto se ejecuta cuando no hay otras coincidencias.
Se necesita una sentencia break en cada caso para pasar al final de la sentencia switch.
Sin la sentencia break, la ejecución del programa pasa a la siguiente sentencia case.
Esto puede ser útil cuando la misma sentencia es necesaria para varios casos. Considere la siguiente sentencia switch:
*/
#include <stdio.h>

int main() {
    int num = 3;

    switch (num) {
        case 1:
        case 2:
        case 3:
            printf("One, Two, or Three.\n");
            break;   
        case 4:
        case 5:
        case 6:
            printf("Four, Five, or Six.\n");
            break;
        default:
            printf("Greater than Six.\n");
    }
    return 0;
}
/* Hay que tener cuidado al construir el interruptor de esta manera. Las modificaciones posteriores pueden dar lugar a resultados inesperados. */

