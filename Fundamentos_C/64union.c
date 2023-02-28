/*
Acceso a los miembros de la unión


Para acceder a los miembros de una variable de unión se utiliza el operador de 
punto entre el nombre de la variable y el nombre del miembro.
Cuando se realiza la asignación, la posición de memoria de la unión se utilizará 
para ese miembro hasta que se realice otra asignación de miembro.

Intentar acceder a un miembro que no está ocupando la posición de memoria da resultados inesperados.

El siguiente programa demuestra el acceso a los miembros de la unión:
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
    union val test;

    test.int_num = 123;
    test.fl_num = 98.76;
    strcpy(test.str, "hello");

    printf("%d\n", test.int_num);
    printf("%f\n", test.fl_num);
    printf("%s\n", test.str);
    return 0;
}
/*
La última asignación anula las anteriores, por lo que str almacena un valor y el acceso a int_num y fl_num no tiene sentido.

 */
