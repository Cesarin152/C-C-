/*
Operadores de asignación

Una sentencia de asignación evalúa primero la expresión situada a la derecha del signo igual y luego asigna ese valor 
a la variable situada a la izquierda del =. Esto permite utilizar la misma variable en ambos lados de una sentencia de asignación, 
lo que se hace con frecuencia en programación.
Por ejemplo:
int x = 3;
x = x + 1;  /* x es ahora 4
Para acortar este tipo de sentencia de asignación, C ofrece el operador de asignación +=. La sentencia anterior puede escribirse como
x += 1;  x = x + 1 
 */

/*
Muchos operadores de C tienen su correspondiente operador de asignación.
El siguiente programa demuestra los operadores de asignación aritmética:
 */
#include <stdio.h>

int main() {
    int x = 2;
  
    x += 1;  // 3
    x -= 1;  // 2
    x *= 3;  // 6
    x /= 2;  // 3
    x %= 2;  // 1
    x += 3 * 2;  // 7
    
    printf("%d", x);

    return 0;
}
/*
Fíjate bien en la última sentencia de asignación. 
Toda la expresión de la derecha se evalúa y luego se suma a x antes de ser asignada a x. 
Puedes pensar en la declaración como x = x + (3 * 2).

 */