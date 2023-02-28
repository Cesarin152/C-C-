/* 
Funciones en C
Cuando los tipos y nombres de los parámetros se incluyen en una declaración, ésta se denomina prototipo de función.
Por ejemplo, el prototipo de función square aparece encima de main():


#include <stdio.h>

**declaracion** 
int square(int num);
​

int main(){
    ​int x, result;
        ​x = 5;
    ​result = square(x);
    ​printf("%d squared is %d\n", x, result);
        ​return 0;
}


Nuestra función cuadrada retorna un entero y toma un parámetro de tipo int.

El último paso es definir la función. Las definiciones de funciones suelen aparecer después de la función main().
El programa completo de abajo muestra la declaración y definición de la función cuadrada:

*/
#include <stdio.h>

/* declaracion */
int square(int num);

int main()
{
    int x, result;

    x = 5;
    result = square(x);
    printf("%d squared is %d\n", x, result);

    return 0;
}

/* Prototipo */
int square(int num)
{
    int y;

    y = num * num;

    return (y);
}
/*Como puede ver, la función square calcula y devuelve el cuadrado de su parámetro.
Una función puede tomar varios parámetros - en este caso deben estar separados por comas.
La sentencia return se utiliza para devolver un valor a la sentencia que la llama.*/
