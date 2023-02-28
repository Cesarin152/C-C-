/*
Escribir en un archivo


La biblioteca stdio.h también incluye funciones para escribir en un archivo. 
Cuando se escribe en un fichero, hay que añadir explícitamente los caracteres de nueva línea '\n'.

fputc(char, fp) Escribe el carácter char en el fichero apuntado por fp.

fputs(str, fp) Escribe la cadena str en el fichero apuntado por fp.

fprintf(fp, str, vars) Imprime la cadena string en el fichero apuntado por fp. 
str puede incluir opcionalmente especificadores de formato y una lista de variables vars.

El siguiente programa demuestra la escritura en un archivo:
 */
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    char filename[50];
    char c;
    char txt[]=".txt";

    printf("Enter the filename of the file to create: ");
    gets(filename);
    strcat(filename,txt);
    printf("%s\n\n",filename);
    fptr = fopen(filename, "w");

    /* write to file */
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);

    fclose(fptr);

    /* read the file contents */
    fptr = fopen(filename, "r");
    while ((c = getc(fptr)) != EOF)
        printf("%c", c);
    fclose(fptr);
    return 0;
}
//El argumento "w" define el "modo de escritura" para la función fopen.