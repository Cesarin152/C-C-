/*
Las funciones perror y strerror


Cuando una función de biblioteca establece errno, se asigna un críptico Numero de error. 
Para obtener un mensaje más descriptivo sobre el error, puede utilizar perror(). 
También puede obtener el mensaje utilizando strerror() en el archivo de cabecera string.h, que devuelve un puntero al texto del mensaje.

perror() debe incluir un string que precederá al mensaje de error real. Típicamente, 
no hay necesidad de usar tanto perror() como strerror() para el mismo error, 
pero ambos se usan en el programa de abajo para propósitos de demostración:

 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fptr;

    errno = 0;
    fptr = fopen("c:\\nonexistantfile.txt", "r");
    if (fptr == NULL)
    {
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    return 0;
}
/*
Hay más de cien códigos de error. Utiliza estos enunciados para enumerarlos: */
/*
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {
    for (int x = 0; x < 135; x++)
        fprintf(stderr, "%d: %s\n", x, strerror(x));
}*/