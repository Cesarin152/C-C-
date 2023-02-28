/*
Formateo de la salida

La función printf fue introducida en su primer programa Hola Mundo. Una llamada a esta función requiere una string 
de formato que puede incluir secuencias de escape para la salida de caracteres especiales y especificadores de 
formato que son reemplazados por valores.
Por ejemplo:
 */

#include <stdio.h>
/*
int main() {
    printf("El árbol tiene %d manzanas. y %d hojas\n", 22,1000);
    //salida: El árbol tiene 22 manzanas.y 1000 hojas 

    printf("\"¡Hola Mundo!\"\n");
    // salida: "¡Hola Mundo!" 
}
*/
/*

Las secuencias de escape comienzan con una barra invertida \:
\n nueva línea
\t tabulador horizontal
\\ barra invertida
\b retroceso
\' comilla simple
\" comillas dobles

Los especificadores de formato comienzan con un signo de porcentaje % y se sustituyen por los 
argumentos correspondientes después de la cadena de formato. Un especificador de formato puede 
incluir varias opciones junto con un carácter de conversión:
 */
/*
%[-][ancho].[precisión]carácter de conversión 
El opcional - especifica la alineación a la izquierda de los datos en el string.
La anchura opcional da el número mínimo de caracteres para los datos.
El punto . separa la anchura de la precisión.
La precisión opcional da el número de decimales para los datos numéricos. 
Si se utiliza s como carácter de conversión, la precisión determina el número de caracteres a imprimir.
El carácter de conversión convierte el argumento, si es necesario, al tipo indicado:
d decimal
c carácter
s string
f float
e notación científica
x hexadecimal
*
Para imprimir el símbolo %, utilice %% en la cadena de formato. */
#include <stdio.h>

int main() {
    
    printf("Color: %s, Numero: %d, float: %5.2f \n", "rojo", 42, 3.14159);
    /* Color: rojo, Numero: 42, float:  3.14 */

    printf("Pi = %3.2f \n", 3.14159); 
    /* Pi = 3.14 */
    
    printf("Pi = %3.5f \n", 3.14159); 
    /* Pi = 3.14159 */
    
    printf("Pi = %-8.5f \n", 3.14159); 
    /* Pi = 3.14159 */
    
    printf("Hay %d %s en el árbol. \n", 22, "manzanas");
    /* Hay 22 manzanas en el árbol. */
    return 0;
}