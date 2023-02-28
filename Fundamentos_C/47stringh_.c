/*
La biblioteca string.h


La biblioteca string.h contiene numerosas funciones de string.
La sentencia #include <string.h> en la parte superior de su programa le da acceso a las siguientes:
strlen(str) Devuelve la longitud de la cadena almacenada en str, sin incluir el carácter NULL.
strcat(str1, str2) Añade (concatena) str2 al final de str1 y devuelve un puntero a str1.
strcpy(str1, str2) Copia str2 a str1. Esta función es útil para asignar a un string un nuevo valor.

El siguiente programa muestra las funciones de string.h:
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[ ] = "The grey fox";
    char s2[ ] = " jumped.";
    
    strcat(s1, s2);
    printf("%s\n", s1);
    printf("Length of s1 is %d\n", strlen(s1));
    strcpy(s1, s2);
    printf("s1 is now %s \n", s1);

    return 0;
} 
/*
Otras funciones de string.h son
strncat(str1, str2, n) Añade (concatena) los primeros n caracteres de str2 al final de str1 y devuelve un puntero a str1.
strncpy(str1, str2, n) Copia los primeros n caracteres de str2 a str1.
strcmp(str1, str2) Devuelve 0 cuando str1 es igual a str2, menos de 0 cuando str1 < str2, y mayor de 0 cuando str1 > str2.
strncmp(str1, str2, n) Devuelve 0 cuando los primeros n caracteres de str1 son iguales a los primeros n caracteres de str2, menor que 0 cuando str1 < str2, y mayor que 0 cuando str1 > str2.
strchr(str1, c) Devuelve un puntero a la primera aparición de char c en str1, o NULL si no se encuentra el carácter.
strrchr(str1, c) Busca en str1 en sentido inverso y devuelve un puntero a la posición de char c en str1, o NULL si no se encuentra el carácter.
strstr(str1, str2) Devuelve un puntero a la primera aparición de str2 en str1, o NULL si no se encuentra str2.
 */