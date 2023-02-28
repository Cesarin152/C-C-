/*
Lectura de un archivo


La biblioteca stdio.h también incluye funciones para leer desde un archivo abierto. 
Se puede leer un archivo carácter por carácter o se puede leer una cadena completa en un buffer de caracteres, que suele ser una matriz de caracteres utilizada para el almacenamiento temporal.

fgetc(fp) Devuelve el siguiente carácter del fichero apuntado por fp. 
Si se ha alcanzado el final del archivo, se devuelve EOF.

fgets(buff, n, fp) Lee n-1 caracteres del fichero apuntado por fp y almacena la string en buff. 
Se añade un carácter NULL '\0' como último carácter en buff. 
Si fgets encuentra un carácter de nueva línea o el final del archivo antes de alcanzar n-1 
caracteres, entonces sólo se almacenan en buff los caracteres hasta ese punto.

fscanf(fp, conversion_specifiers, vars) Lee los caracteres del archivo apuntado por fp y 
asigna la entrada a una lista de punteros de variables vars utilizando conversion_specifiers. 
Al igual que con scanf, fscanf deja de leer un string cuando se encuentra un espacio o una nueva línea.

El siguiente programa demuestra la lectura de un archivo:
 */
#include <stdio.h>

int main()
{
    FILE *fptr;
    int c, stock;
    char buffer[200], item[10];
    float price;

    /* myfile.txt: Inventory\n100 Widget 0.29\nEnd of List */

    fptr = fopen("myfile.txt", "r");

    fgets(buffer, 20, fptr); /* read a line */
    printf("%s\n", buffer);

    fscanf(fptr, "%d%s%f", &stock, item, &price); /* read data */
    printf("%d  %s  %4.2f\n", stock, item, price);

    while ((c = getc(fptr)) != EOF) /* read the rest of the file */
    {
        //printf(" getc: %d\n", getc(fptr));
        printf("%c", c);//Imprime los valores de asci(codigo) a texto
    }
    fclose(fptr);
    return 0;
}
/*
La función gets() lee hasta la nueva línea. fscanf() lee los datos según los especificadores de conversión. 
Y luego el bucle while lee un carácter a la vez hasta el final del archivo. La comprobación de un problema 
al abrir el archivo (un puntero NULL) se omitió para acortar el ejemplo.

 */