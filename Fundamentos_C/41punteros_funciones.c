/*
Funciones con parámetros de matrices


Un array no se puede pasar por valor a una función. Sin embargo, el nombre de un array es un puntero, por lo que pasar un nombre de array a una función es pasar un puntero al array.

Considere el siguiente programa:
 */
#include <stdio.h>

int add_up(int *a, int num_elements);

int main()
{
    int orders[5][2] = {100, 220, 37, 16, 98};

    printf("Total orders is %d\n", add_up(orders, 5));

    return 0;
}

int add_up(int *a, int num_elements)
{
    int total = 0;
    int k;

    for (k = 0; k < num_elements; k++)
    {
        total += a[k];
    }

    return (total);
}
//La salida del programa es: "El total de pedidos es de 471"
