/*
El operador lógico OR || devuelve un resultado verdadero cuando una o ambas expresiones son verdaderas.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    char n = 'X';

    if (n == 'x' || n == 'X')
        printf("Roman numeral value 10.\n");
}
/*
Cualquier Numero de expresiones pueden ser unidas por && y ||.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    int n = 42;
    
    if (n == 999 || (n > 0 && n <= 100))
        printf("Input valid.\n");
}
/*!Los paréntesis se utilizan para mayor claridad aunque && tiene mayor precedencia que || y se evaluará primero. */