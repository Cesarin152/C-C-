/*
Controlar el puntero del archivo


Existen funciones en stdio.h para controlar la ubicación del puntero de archivo en un archivo binario:
ftell(fp) Devuelve un valor long int correspondiente a la posición del puntero del archivo fp en número de bytes desde el inicio del archivo.

fseek(fp, num_bytes, from_pos) Mueve la posición del puntero del archivo fp en num_bytes respecto a la posición from_pos, que puede ser una de las siguientes constantes:
SEEK_SET inicio del archivo
SEEK_CUR posición actual
SEEK_END fin del archivo

El siguiente programa lee un registro de un archivo de estructuras:
 */
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char name[20];
} item;

int main()
{
    FILE *fptr;
    item first, second,firstf ,secondf;

    /* create records */
    first.id = 10276;
    strcpy(first.name, "Widget");
    second.id = 11786;
    strcpy(second.name, "Gadget");

    /* write records to a file */
    fptr = fopen("info.dat", "wb");
    fwrite(&first, 1, sizeof(first), fptr);
    fwrite(&second, 1, sizeof(second), fptr);
    fclose(fptr);

    /* file contains 2 records of type item */
    fptr = fopen("info.dat", "rb");

    /* seek second record */
    fread(&firstf, 1, sizeof(item), fptr);
    printf("%d  %s\n", firstf.id, firstf.name);
    fseek(fptr, 1 * sizeof(item), SEEK_SET);
    fread(&secondf, 1, sizeof(item), fptr);
    printf("%d  %s\n", secondf.id, secondf.name);
    fclose(fptr);
    return 0;
}
/*Este programa escribió dos registros de ítems en un archivo. Para leer sólo el segundo registro, fseek() movió el puntero del archivo a 1*sizeof(item) 
bytes desde el comienzo del archivo. Por ejemplo, si quisiera mover el puntero al cuarto registro, entonces buscaría a 3*sizeof(item) desde el principio del archivo (SEEK_SET). */