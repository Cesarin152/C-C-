/*Entrada


C soporta un número de formas para tomar la entrada del usuario.
getchar() Devuelve el valor del siguiente carácter introducido.*/
/*
#include <stdio.h>

int main() {
    char a = getchar();

    printf("Has introducido: %c", a);

    return 0;
}*/
/*
La entrada se almacena en la variable a.

La función gets() se utiliza para leer la entrada como una secuencia ordenada de caracteres, también llamada cadena.
Una cadena se almacena en una matriz de caracteres.
Por ejemplo:
 */

/*
#include <stdio.h>

int main() {
    char a[100];

    gets(a); 

    printf("Has introducido: %s", a);

    return 0;
}
 */

/*Aquí almacenamos la entrada en un array de 100 caracteres.

scanf() escanea la entrada que coincide con los especificadores de formato.

Por ejemplo: */

/*
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    printf("Ha introducido: %d", a);

    return 0;
}

/*
El signo & que precede al nombre de la variable es el operador de dirección. Da la dirección, 
o la ubicación en la memoria, de una variable. Esto es necesario porque scanf coloca un valor de 
entrada en una dirección variable
Como otro ejemplo, pidamos dos entradas enteras y saquemos su suma: 
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("\nSum: %d", a+b);

    return 0;
}
 
/*scanf() deja de leer en cuanto encuentra un espacio, por lo que un texto como "Hola Mundo" son dos entradas separadas para scanf().*/