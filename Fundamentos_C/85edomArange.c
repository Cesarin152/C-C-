/*
Códigos de error EDOM y ERANGE


Algunas de las funciones matemáticas de la biblioteca math.h establecen errno al 
valor de la macro definida EDOM cuando un dominio está fuera de rango.
Del mismo modo, el valor de la macro ERANGE se utiliza cuando hay un error de rango.
Por ejemplo:
 */
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <math.h>

int main()
{
    float k = -5;
    float num = 1000;
    float result;

    errno = 0;
    result = sqrt(k);
    if (errno == 0)
        printf("%f ", result);
    else if (errno == EDOM)
        fprintf(stderr, "%s\n", strerror(errno));

    errno = 0;
    result = exp(num);
    if (errno == 0)
        printf("%f ", result);
    else if (errno == ERANGE)
        fprintf(stderr, "%s\n", strerror(errno));

    return 0;
}