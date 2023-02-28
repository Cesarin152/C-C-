/*Matrices bidimensionales


Un array bidimensional es un array de arrays y puede considerarse como una tabla. También puedes pensar en una matriz bidimensional como una cuadrícula para representar un tablero de ajedrez, bloques de ciudad y mucho más.

Una declaración de matriz bidimensional indica el número de filas y el número de columnas.
Por ejemplo:
int a[2][3];  A 2 x 3 array 

Las llaves anidadas se utilizan para inicializar elementos fila por fila, como en la siguiente declaración:
int a[2][3] = {
  {3, 2, 6},
  {4, 5, 20}
}; 
La misma afirmación también puede adoptar la forma:
int a[2][3] = { {3, 2, 6}, {4, 5, 20} }; 
La primera afirmación ofrece más claridad a la hora de visualizar la estructura del array.
Un array puede tener más de dos dimensiones. Por ejemplo, a[5][3][4]
es un array que tiene 5 elementos que almacenan 3 elementos que almacenan 4 elementos cada uno.
 */

/* 
Acceso a matrices bidimensionales


Para acceder a un elemento de una matriz bidimensional, se requiere tanto el índice de la fila como el de la columna.
Por ejemplo, las siguientes sentencias muestran el valor de un elemento y luego asignan un nuevo valor:
 */
#include <stdio.h>

int main() {
    int a[2][3] = {
        {3, 2, 6},
        {4, 5, 20}
    };
    printf("Element 3 in row 2 is %d\n", a[1][2]); /* 20 */
    a[1][2] = 25;
    printf("Element 3 in row 2 is %d\n", a[1][2]); /* 25 */
   
	return 0;
}
/*
Al igual que un bucle for se utiliza para iterar a través de una matriz unidimensional, los bucles for anidados se utilizan para recorrer una matriz bidimensional:
 */
#include <stdio.h>

int main() {
    int a[2][3] = {
        {3, 2, 6},
        {4, 5, 20}
    };
    
    int k, j;
    /* display array contents */
    for (k = 0; k < 2; k++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[k][j]);
        }
        printf("\n");
    }
   
	return 0;
}