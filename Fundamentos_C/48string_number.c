/*
Convertir una string en un Numero


Convertir una string de caracteres numéricos en un valor numérico es una tarea común en la programación en C y se utiliza a menudo para evitar un error en tiempo de ejecución.
Leer una string es menos propenso a errores que esperar un valor numérico, sólo para que el usuario escriba accidentalmente una "o" en lugar de un "0" (cero).

La biblioteca stdio.h contiene las siguientes funciones para convertir una string en un Numero:
int atoi(str) Significa de ASCII a entero. Convierte str en el valor int equivalente. Se devuelve 0 si el primer carácter no es un Numero o no se encuentra ningún Numero.
double atof(str) Significa de ASCII a float. Convierte str en el valor doble equivalente. Se devuelve 0,0 si el primer carácter no es un número o no se encuentra ningún número.
long int atol(str) Significa de ASCII a long int. Convierte str en el valor entero largo equivalente. Se devuelve 0 si el primer carácter no es un Numero o no se encuentra ningún Numero.

El siguiente programa demuestra atoi.
 */
#include <stdio.h>
int main()
{
    char input[10];
    int num;

    printf("Enter a number: ");
    gets(input);
    num = atoi(input);

    printf("You entered %d", num);

    return 0;
}
/*
Tenga en cuenta que atoi() carece de gestión de errores, y se recomienda utilizar strtol() si quiere asegurarse de que se realiza una gestión de errores adecuada.
 */