/*
Las funciones feof y ferror


Además de la comprobación de un puntero de archivo NULL y el uso de errno, las funciones feof() y ferror() pueden utilizarse para determinar los errores de 1/O de los archivos:
feof(fp) Devuelve un valor no nulo si se ha alcanzado el final del flujo, 0 en caso contrario. feof también establece EOF.
ferror(fp) Devuelve un valor no nulo si hay un error, 0 si no hay error.

El siguiente programa incorpora varias técnicas de manejo de excepciones:

 */
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    int c;

    errno = 0;
    fptr = fopen("c:\\myfile.txt", "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error opening file. %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    while ((c = getc(fptr)) != EOF) /* read the rest of the file */
        printf("%c", c);

    if (ferror(fptr))
    {
        printf("I/O error reading file.");
        exit(EXIT_FAILURE);
    }
    else if (feof(fptr))
        printf("End of file reached.");

    fclose(fptr);
    return 0;
}
/*
La salida del programa variará. Pero si el archivo se abre correctamente y 
el programa termina de leer todo el archivo, entonces aparece el siguiente mensaje 
"Se ha alcanzado el final del archivo".
 */