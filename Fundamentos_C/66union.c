/*
Punteros a las uniones


Un puntero a una unión apunta a la ubicación de memoria asignada a la unión.
Un puntero a una unión se declara utilizando la palabra clave union y la etiqueta union junto con * y el nombre del puntero.
Por ejemplo, considere las siguientes declaraciones:
 */

#include <stdio.h>
#include <string.h>

union val
{
    int int_num;
    float fl_num;
    char str[20];
};

int main()
{
    union val info;
    union val *ptr = NULL;
    ptr = &info;
    ptr->int_num = 10;
    printf("info.int_num is %d\n", info.int_num);
    printf("info->int_num is %d", ptr->int_num);

    return 0;
}
/*
Cuando se quiere acceder a los miembros de la unión a través de un puntero, se requiere el operador ->.

(*ptr).int_num es lo mismo que ptr->int_num.
 */