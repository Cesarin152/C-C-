/*
Uso de errno


Algunas funciones de biblioteca, como fopen(), establecen un código de error cuando no se ejecutan como se espera. 
El código de error se establece en una variable global llamada errno, que se define en el archivo de cabecera errno.h. 
Cuando se utiliza errno se debe poner a 0 antes de llamar a una función de la biblioteca.

Para dar salida al código de error almacenado en errno, se utiliza fprintf para imprimir en el flujo de archivos stderr, 
la salida de error estándar a la pantalla. El uso de stderr es una cuestión de convención y una buena práctica de programación.

Puede dar salida a errno a través de otros medios, pero será más fácil hacer un seguimiento 
de su manejo de excepciones si sólo utiliza stderr para los mensajes de error.

Para usar errno, necesita declararlo con la sentencia extern int errno; en la 
parte superior de su programa (o puede incluir el archivo de cabecera errno.h).
Por ejemplo:
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int main()
{
    FILE *fptr;

    errno = 0;
    fptr = fopen("c:\\nonexistantfile.txt", "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error opening file. Error code: %d\n", errno);
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    return 0;
}