/*
El bucle for


La sentencia for es una estructura de bucle que ejecuta las sentencias un número fijo de veces.
Tiene la forma:
for ( valor inicial; condición; incremento) {
  declaraciones;
}



El valor inicial es un contador con un valor inicial.
Esta parte del bucle for se realiza sólo una vez.
La condición es una expresión booleana que compara
el contador con un valor antes de cada iteración del bucle,
deteniendo el bucle cuando se devuelve false.
El incremento aumenta (o disminuye) el contador en un valor establecido.

Por ejemplo, el programa de abajo muestra del 0 al 9:
 */
/*
#include <stdio.h>

int main()
{
    int i;
    int max = 10;

    for (i = 0; i < max; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}*/
/*
El bucle for puede contener varias expresiones separadas por comas en cada parte.
Por ejemplo:
for (x = 0, y = num; x < y; i++, y--) {
  declaraciones;
}

Además, puede omitir el initvalue, la condición y/o el incremento.
Por ejemplo:
 */
/*
#include <stdio.h>

int main() {
    int i=0;
    int max = 10;

    for (;i < max; i++) {
        printf("%d\n", i);
    }
}
*/
/*
Los bucles también pueden estar anidados.
Al escribir un programa de esta manera, hay un bucle exterior y un bucle interior.
En cada iteración del bucle exterior, el bucle interior repite su ciclo completo.
En el siguiente ejemplo, se utilizan bucles for anidados para obtener una tabla de multiplicación:
 */

#include <stdio.h>

int main()
{
    
    int table = 10;
    int max = 12;

    for (int i = 1; i <= table; i++)
    {
        for (int j = 0; j <= max; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // blank line between tables
    }

    return 0;
}
/* Una interrupción en un bucle interno sale de ese bucle y la ejecución continúa con el bucle externo.
Una sentencia continue funciona de forma similar en los bucles anidados.*/
