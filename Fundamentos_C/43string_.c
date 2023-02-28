/*
Strings


Un string en C es una matriz de caracteres que termina con un carácter NULL '\0'.
Una declaración de string puede hacerse de varias maneras, cada una con sus propias consideraciones.
Por ejemplo:

char str_name[str_len] = "string"; 

Esto crea una cadena llamada str_name de str_len caracteres y la inicializa con el valor "string".
Cuando se proporciona un literal de cadena para inicializar la cadena, el compilador añade automáticamente un carácter NULL '\0' a la matriz de caracteres.
Por esta razón, debes declarar el tamaño del array para que sea al menos un carácter más largo que la longitud esperada de la string.
Las declaraciones siguientes crean strings que incluyen el carácter NULL. Si la declaración no incluye un tamaño de matriz char, entonces se calculará en base a la longitud de la string en la inicialización más uno para '\0':


 */
#include <stdio.h>

int main() {
    char str1[6] = "hello";
    char str2[ ] = "world";  /* size 6 */
    printf("str1 is: %s, str2 is: %s", str1, str2);
    
    return 0;
}
//Un string también puede declararse como un conjunto de caracteres:
#include <stdio.h>

int main() {
    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'}; /* size 6 */
    printf("str3 is: %s, str4 is: %s", str3, str4);
    
    return 0;
}
/*
Con este enfoque, el carácter NULL debe añadirse explícitamente. 
Tenga en cuenta que los caracteres van entre comillas simples.
Como en cualquier matriz, el nombre de un string actúa como puntero.
Un literal de string es un texto encerrado entre comillas dobles.
Un carácter, como 'b', se indica con comillas simples y no puede tratarse como un string.

Una declaración de puntero de string como char *str = "stuff"; 
se considera una constante y no puede modificarse desde su valor inicial.

Para operar con cadenas de forma segura y cómoda, puede utilizar las funciones
de cadena de la Biblioteca Estándar que se muestran a continuación. No olvides incluir <string.h>.

strlen() - obtiene la longitud de una cadena
strcat() - fusiona dos strings
strcpy() - copia una cadena a otra
strlwr() - convierte una cadena a minúsculas
strupr() - convierte una cadena en mayúsculas
strrev() - invertir una cadena
strcmp() - compara dos strings

Las funciones de string y los punteros de string se tratan en lecciones posteriores.
 */