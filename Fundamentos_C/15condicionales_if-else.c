/* 
La sentencia if-else

La sentencia if puede incluir una cláusula else opcional que ejecuta sentencias cuando una expresión es falsa.
Por ejemplo, el siguiente programa evalúa la expresión y luego ejecuta la sentencia de la cláusula else:

*/
/*
#include <stdio.h>

int main() {
    int puntuación = 89;
  
    if ( puntuación >= 90)
        printf("Top 10%%.\n");
    else
        printf("Menos de 90.\n");
    
    return 0;
}*/
/*
Expresiones condicionales
Otra forma de formar una sentencia if-else es utilizando el operador ?: en una expresión condicional. 
El operador ?: sólo puede tener una sentencia asociada al if y al else.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    int y;
    int x = 2;

    y = (x >= 5) ?  5 : x;

    printf("%d", y);

    return 0;
}