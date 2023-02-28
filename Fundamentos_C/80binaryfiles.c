/* 
Archivo binario I/0


Escribir sólo caracteres y strings en un fichero puede resultar tedioso cuando se tiene un array o una estructura. 
Para escribir bloques enteros de memoria en un fichero, existen las siguientes funciones binarias:

Las opciones de modo de archivo binario para la función fopen() son:
- rb abrir para leer (el archivo debe existir)
- wb abrir para escribir (el archivo no debe existir)
- ab abrir para añadir (el archivo no debe existir)
- rb+ abrir para leer y escribir desde el principio
- wb+ abierto para leer y escribir, sobrescribiendo el archivo
- ab+ abierto para leer y escribir, añadiendo al archivo

fwrite(ptr, item_size, num_items, fp) Escribe num_items elementos de tamaño item_size desde el puntero ptr al archivo apuntado por el puntero de archivo fp.

fread(ptr, item_size, num_items, fp) Lee el número de elementos de tamaño item_size del archivo apuntado por el puntero de archivo fp en la memoria apuntada por ptr.

fclose(fp) Cierra el archivo abierto con fp, retornando 0 si el cierre fue exitoso. Se devuelve EOF si hay un error en el cierre.

feof(fp) Devuelve 0 cuando se ha alcanzado el final del flujo de archivos.
*/
#include <stdio.h>

int main()
{
    FILE *fptr;
    int arr[10];
    int x[10];
    int k;

    /* generate array of numbers */
    for (k = 0; k < 10; k++)
        arr[k] = k;

    /* write array to file */
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), fptr);
    fclose(fptr);

    /* read array from file */
    fptr = fopen("datafile.bin", "rb");
    fread(x, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), fptr);
    fclose(fptr);

    /* print array */
    for (k = 0; k < 10; k++)
        printf("%d", x[k]);
    return 0;
}
/*
Este programa escribió un array de ints en un archivo, pero un array de estructuras podría haber sido escrito en un archivo con la misma facilidad.
Observe que el tamaño del elemento y el Numero de elementos fueron determinados usando el tamaño de un elemento y el tamaño de la variable completa.

Las extensiones de los archivos por sí solas no determinan el formato de los datos en un archivo, pero son útiles para indicar el tipo de datos que se espera. 
Por ejemplo, una extensión .txt indica un archivo de texto, .bin es para datos binarios, .csv indica valores separados por comas y .dat es un archivo de datos.
 */