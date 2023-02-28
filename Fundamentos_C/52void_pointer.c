/*
El puntero void


Un puntero void se utiliza para referirse a cualquier tipo de dirección en la memoria y tiene una declaración parecida a
void *ptr;

El siguiente programa utiliza el mismo puntero para tres tipos de datos diferentes:
 */
#include <stdio.h>

int main()
{
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void ptr points to %d\n", *((int *)ptr));
    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c", *((char *)ptr));

    return 0;
}
/*
Cuando se hace referencia a un puntero void, primero se debe convertir el puntero al tipo de datos apropiado antes de hacer la referencia con *.
!No se puede realizar aritmética de punteros con punteros void.
 */
///////////-------//////////////
/*
Funciones que utilizan punteros void


Los punteros void se utilizan a menudo para las declaraciones de funciones.
Por ejemplo:
void * square (const void *);

El uso de un tipo de retorno void * permite cualquier tipo de retorno.
Del mismo modo, los parámetros que son void * aceptan cualquier tipo de argumento. 
Si quieres utilizar los datos pasados por el parámetro sin cambiarlo, lo declaras const.
Puedes omitir el nombre del parámetro para aislar aún más la declaración de su implementación.
Declarar una función de esta manera permite personalizar la definición según sea necesario sin tener que cambiar la declaración.

Considere el siguiente programa:
  */

#include <stdio.h>

void *square(const void *num);

int main()
{
    int x, sq_int;
    x = 6;
    sq_int = square(&x);
    printf("%d squared is %d\n", x, sq_int);

    return 0;
}

void *square(const void *num)
{
    static int result;

    result = (*(int *)num) * (*(int *)num);
    return (result);
}
/*
Esta función square ha sido escrita para multiplicar ints, por lo que el puntero num void se convierte en un int.
Si se cambiara la implementación para permitir que square() multiplique flotantes, sólo habría que cambiar la definición sin tener que hacer cambios en la declaración.
 */