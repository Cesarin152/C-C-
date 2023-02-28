/*
Acceso a los archivos


Un archivo externo puede abrirse, leerse y escribirse en un programa C. Para estas operaciones, C incluye el tipo FILE para definir un flujo de archivos. 
El flujo de archivos mantiene un registro de dónde se produjo la última lectura y escritura.

La biblioteca stdio.h incluye funciones de manejo de archivos:
FILE Typedef para definir un puntero de archivo.

fopen(filename, mode) Devuelve un puntero FILE al archivo filename que se abre usando mode. Si no se puede abrir un archivo, se devuelve NULL.
Las opciones de modo son:
r abrir para leer (el archivo debe existir)
w abierto para escribir (el archivo no debe existir)
- a abierto para añadir (el archivo no debe existir)
- r+ abierto para leer y escribir desde el principio
- w+ abierto para leer y escribir, sobrescribiendo el archivo
- a+ abierto para leer y escribir, añadiendo al archivo

fclose(fp) Cierra el archivo abierto con FILE fp, return 0 si el cierre fue exitoso. Se devuelve EOF (fin de archivo) si hay un error en el cierre.

El siguiente programa abre un archivo para escribir y luego lo cierra:
 */
#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("myfile.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file.");
        return -1;
    }
    fclose(fptr);
    return 0;
}
/*
Cuando se utiliza un literal de cadena para especificar un nombre de archivo, 
la secuencia de escape \\ indica una sola barra invertida. En este programa, 
si hay un error al abrir el archivo, se devuelve al sistema un código de error -1. 
El manejo de errores se explica en una lección futura.

Cerrar un archivo cuando se termina de utilizar es una buena práctica de programación.
 */