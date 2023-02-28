/*
Matriz de punteros de función


Una matriz de punteros a funciones puede sustituir a un switch
o a una sentencia if para elegir una acción, como en el siguiente programa:

 */
#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{
    int x, y, choice, result;
    int (*op[4])(int, int)={add,subtract,multiply,divide};
    /*
    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;
    */
    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
    printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
    scanf("%d", &choice);
    result = op[choice](x, y);
    printf("\n %d", result);

    return 0;
}

int add(int x, int y)
{
    return (x + y);
}

int subtract(int x, int y)
{
    return (x - y);
}

int multiply(int x, int y)
{
    return (x * y);
}

int divide(int x, int y)
{
    if (y != 0)
        return (x / y);
    else
        return 0;
}
/*
La sentencia int (*op[4])(int, int); declara el array de punteros de la función.
Cada elemento de la matriz debe tener los mismos parámetros y el mismo tipo de return.
En este caso, las funciones asignadas al array tienen dos parámetros int y devuelven un int.
La sentencia resultado = op[choice](x, y); ejecuta la función adecuada según la elección del usuario.
Los enteros introducidos anteriormente son los argumentos pasados a la función.
 */
