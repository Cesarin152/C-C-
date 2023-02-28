/*
Matriz de strings


Se puede utilizar una matriz bidimensional para almacenar strings relacionados.
Considere la siguiente sentencia que declara un array con 3 elementos, cada uno con 15 caracteres:

char viaje[3][15] = {
  "maleta",
  "pasaporte",
  "billete"
};

Aunque las longitudes de las strings varían, es necesario declarar un tamaño lo suficientemente grande como para contener la string más larga.
Además, puede ser muy engorroso acceder a los elementos.
Referirse a trip[0] por "maleta" es propenso a errores. 
En su lugar, debes pensar en el elemento en [0][0] como "m", el elemento en [2][3] como "l", y así sucesivamente.

Una forma más fácil e intuitiva de tratar una colección de strings relacionados es con una matriz de punteros, como en el siguiente programa:

 */
#include <stdio.h>

int main()
{
    char *trip[] = {
        "maleta",
        "pasaporte",
        "billete"};

    printf("Por favor, traiga lo siguiente:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", trip[i]);
    }

    return 0;
}
/*
Dado que cada elemento puede variar en longitud, la matriz de punteros de string tiene una estructura más irregular que una estructura de cuadrícula bidimensional.
Con este enfoque, no hay límite en la longitud de la cadena. Y lo que es más importante, los elementos pueden ser referidos por un puntero al primer carácter de cada string.

Ten en cuenta que una declaración como char *items[3]; sólo reserva espacio para tres punteros; las cadenas reales están siendo referenciadas por esos punteros.
 */