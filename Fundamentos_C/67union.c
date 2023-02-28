/*
Uniones como parámetros de función


Una función puede tener parámetros de unión que aceptan argumentos por valor cuando lo único que se necesita es una copia de la variable de unión.

Para que una función cambie el valor real de una ubicación de memoria de la unión, se necesitan parámetros de puntero.
Por ejemplo: 
 */
#include <stdio.h>
#include <string.h>

union id
{
    int id_num;
    char name[20];
};

void set_id(union id *item);
void show_id(union id item);

int main()
{
    union id item;

    set_id(&item);
    show_id(item);

    return 0;
}

void set_id(union id *item)
{
    item->id_num = 42;
}

void show_id(union id item)
{
    printf("ID is %d", item.id_num);
}