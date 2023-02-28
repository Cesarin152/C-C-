/*
Acceso a los elementos de una matriz

El contenido de una matriz se denomina elementos y cada elemento es accesible mediante un Numero de índice.
En C, los Números de índice comienzan en 0.
Una matriz con 5 elementos tendrá los números de índice 0, 1, 2, 3 y 4. Considere un array x:

int x[5] = {20, 45, 16, 18, 22}; 

Se puede pensar como:
0 => [20]
1 => [45]
2 => [16]
3 => [18]
4 => [22]

Para acceder a un elemento de la matriz, consulte su Numero de índice.
Por ejemplo:

 */
#include <stdio.h>

int main() {
    int x[5] = {20, 45, 16, 18, 22};
    printf("El segundo elemento es %d\n", x[1]); /* 45 */ 
    
    return 0;
}
/* El valor de un elemento del array se puede cambiar a través de una sentencia de asignación, que también requiere utilizar el nombre del array y el índice: */
#include <stdio.h>

int main() {
    int x[5] = {20, 45, 16, 18, 22};
    x[1] = 260;
    printf("The second element is %d\n", x[1]); /* 260 */
    
	return 0;
}//El índice de una matriz también se denomina subíndice.