/*
Salida

Ya hemos utilizado la función printf() para generar la salida en las lecciones anteriores. 
En esta lección, cubrimos otras funciones que pueden ser utilizadas para la salida.

putchar() Da salida a un solo carácter.
Por ejemplo:
 */
/*
#include <stdio.h>

int main()
{
    char a = getchar();

    printf("Has introducido: ");
    putchar(a);

    return 0;
}*/

/*
La entrada se almacena en la variable a.

La función puts() se utiliza para mostrar la salida como un string.
Un string se almacena en una matriz de caracteres.
Por ejemplo:
 */

    #include <stdio.h>

int main() {
    char a[100];

    gets(a); 

    printf("Has introducido: ");
    puts(a); 

    return 0;
} 

