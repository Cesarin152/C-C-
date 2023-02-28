/*
Asignación de memoria para strings


Cuando se asigna memoria a un puntero de cadena, es posible que desee utilizar 
la longitud de la cadena en lugar del operador sizeof para calcular los bytes.
Considere el siguiente programa:
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str20[20];
    char *str = NULL;

    strcpy(str20, "12345");
    printf("str20 size: %ld\n", sizeof(str20));
    printf("str20 length: %ld\n", strlen(str20));
    str = malloc(strlen(str20) + 1); /* make room for \0 */
    strcpy(str, str20);
    printf("%s", str);

    return 0;
}
/*
Este enfoque es una mejor gestión de la memoria porque no se está asignando más espacio del necesario a un puntero.
Cuando use strlen para determinar el Numero de bytes necesarios para un string, asegúrese de incluir un byte extra para el carácter NULL '\0'.
Un char es siempre un byte, por lo que no es necesario multiplicar los requisitos de memoria por sizeof(char).
 */