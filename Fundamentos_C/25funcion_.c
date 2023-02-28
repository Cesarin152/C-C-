/*Funciones en C


Las funciones son fundamentales en la programación en C y se utilizan para llevar a cabo la solución de un programa como una serie de subtareas.
A estas alturas ya sabes que todo programa en C contiene una función main(). Y estás familiarizado con la función printf().

También puedes crear tus propias funciones.
Una función
- es un bloque de código que realiza una tarea específica
- es reutilizable
- hace que un programa sea más fácil de probar
- puede modificarse sin cambiar el programa de llamada

Incluso un programa sencillo es más fácil de entender cuando main() se divide en subtareas que se implementan con funciones.
Por ejemplo, está claro que el objetivo de este programa es calcular el cuadrado de un Numero: */
#include <stdio.h>
int main()
{
    int x, result;

    x = 5;
    result = square(x);//<--Error no se ha declarado previamente
    printf("%d squared is %d\n", x, result);

    return 0;
}/*Para utilizar la función cuadrada, tenemos que declararla.
Las declaraciones suelen aparecer encima de la función main() y tienen la forma: 

tipo_de_retorno nombre_de_función(parámetros); 


El tipo_de_retorno es el tipo de valor que la función devuelve a la sentencia que la llama. 
El nombre de la función va seguido de paréntesis. Los nombres de los parámetros opcionales 
con declaraciones de tipo se colocan dentro de los paréntesis.
!No es necesario que una función devuelva un valor, pero el tipo de retorno debe estar en la declaración.
En este caso, se utiliza la palabra clave void.
Por ejemplo, la declaración de la función display_message indica 
que la función no devuelve un valor: void display_message();
*/