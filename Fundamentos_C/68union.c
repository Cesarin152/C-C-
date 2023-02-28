/*
Matriz de uniones


Un array puede almacenar elementos de cualquier tipo de datos, incluyendo uniones.
Con las uniones, es importante tener en cuenta que sólo un miembro de la unión puede 
almacenar datos para cada elemento del array.

Después de declarar un array de uniones, se puede acceder a un elemento con el Numero de índice. 
El operador punto se utiliza entonces para acceder a los miembros de la unión, como en el programa:

 */
#include <stdio.h>

union val
{
    int int_num;
    float fl_num;
    char str[20];
};

int main()
{
    union val nums[10];
    int k;

    /* create an array of ints */
    for (k = 0; k < 10; k++)
    {
        nums[k].int_num = k;
    }

    /* display array values */
    for (k = 0; k < 10; k++)
    {
        printf("%d  ", nums[k].int_num);
    }
    printf("El valor del array:%d", nums[1].int_num);

    return 0;
}
/*
Un array es una estructura de datos que almacena valores de colección que son todos del mismo tipo.
Los arrays de uniones permiten almacenar valores de diferentes tipos.
Por ejemplo:
 */
#include <stdio.h>

union type
{
    int i_val;
    float f_val;
    char ch_val;
};

int main()
{
    union type arr[3];
    arr[0].i_val = 42;
    arr[1].f_val = 3.14;
    arr[2].ch_val = 'x';
    printf("1st element is %d, 2nd is %f, and the 3rd is %c", arr[0].i_val, arr[1].f_val, arr[2].ch_val);

    return 0;
}