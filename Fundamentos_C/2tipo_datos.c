/*Tipos de datos
C admite los siguientes tipos de datos básicos:
int: número entero, un número entero.
float: punto flotante, un número con una parte fraccionaria.
double: valor de punto flotante de doble precisión.
char: carácter simple.

La cantidad de almacenamiento necesaria para 
cada uno de estos tipos varía según la plataforma.
C dispone de un operador sizeof integrado que indica 
los requisitos de memoria para un tipo de datos concreto.



*/

#include <stdio.h>
#include <conio.h>

int main() {
    printf("int: %ld \n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("double: %ld \n", sizeof(double));
    printf("char: %ld \n", sizeof(char));
    getch();
    return 0;
}
/*La salida del programa muestra el tamaño correspondiente en
bytes para cada tipo de datos.Las sentencias printf de este 
programa tienen dos argumentos. El primero es la cadena de 
salida con un especificador de formato (%ld), mientras que el 
siguiente argumento devuelve el valor de sizeof. En la salida 
final, el %ld (para decimales largos) es reemplazado por el valor del segundo argumento.

Tenga en cuenta que C no tiene un tipo booleano.

!Una sentencia printf puede tener múltiples especificadores de formato con sus correspondientes 
argumentos para reemplazar los especificadores. Los especificadores de formato también se conocen 
como especificadores de conversión.
Aprenderemos más sobre los especificadores de formato en las próximas lecciones.
 */