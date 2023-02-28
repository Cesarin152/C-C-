/*Ámbito de las variables


El ámbito de las variables se refiere a la visibilidad de las mismas dentro de un programa.
Las variables declaradas en una función son locales para ese bloque de código y no se puede hacer referencia a ellas fuera de la función.
Las variables declaradas fuera de todas las funciones son globales para todo el programa.
Por ejemplo, las constantes declaradas con un #define en la parte superior de un programa son visibles para todo el programa.
El siguiente programa utiliza tanto variables locales como globales: */

#include <stdio.h>

int global1 = 0;

int main()
{
    int local1, local2;

    local1 = 5;
    local2 = 10;
    global1 = local1 + local2;
    printf("%d \n", global1); /* 15 */

    return 0;
}
/*
Cuando se pasan argumentos a los parámetros de la función, los parámetros actúan como variables locales. 
Al salir de una función, los parámetros y cualquier variable local de la función se destruyen.
!Utilice las variables globales con precaución. Deben inicializarse antes de utilizarlas para evitar resultados inesperados. 
Y como pueden ser modificadas en cualquier parte de un programa, las variables globales pueden dar lugar a errores difíciles de detectar.
*/