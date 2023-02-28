/*
Punteros en expresiones


Los punteros pueden utilizarse en expresiones como cualquier variable. Los operadores aritméticos pueden aplicarse a lo que el puntero esté señalando.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    int x = 5;
    int y;
    int *p = NULL;
    p = &x;
    
    y = *p + 2; /* a y se le asigna 7 */
    y += *p; /* a y se le asigna 12 */
    *p = y; /* a x se le asigna 12 */
    (*p)++; /* x se incrementa a 13 */

    printf("p apunta al valor %d\n", *p); 
}//Tenga en cuenta que los paréntesis son necesarios para que el operador ++ incremente el valor apuntado. Lo mismo ocurre cuando se utiliza el operador --.