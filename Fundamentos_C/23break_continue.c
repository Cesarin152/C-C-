/*
break y continue
La sentencia break se introdujo para su uso en la sentencia switch. También es útil para salir inmediatamente de un bucle.
Por ejemplo, el siguiente programa utiliza un break para salir de un bucle while:
 */
/*
#include <stdio.h>

int main()
{
    int num = 5;

    while (num > 0)
    {
        if (num == 3)
            break;
        printf("%d\n", num);
        num--;
    }

    return 0;
}*/
/*
Este programa muestra:
5
4
y luego sale del bucle.

Cuando se desea permanecer en el bucle, pero saltar a la siguiente iteración, se utiliza la sentencia continue.
Por ejemplo:
 */

#include <stdio.h>

int main()
{
    int num = 5;

    while (num > 0)
    {
        num--;
        if (num == 3)
            continue;

        printf("%d\n", num);
    }
}

/*La salida del programa se muestra:
4
2
1
0
Como puedes ver, el valor 3 se salta.

En el código anterior, si num se decrementara después de la sentencia continue se crearía un bucle infinito.
Aunque las sentencias break y continue pueden ser convenientes, no deben ser un sustituto de un mejor algoritmo. */
