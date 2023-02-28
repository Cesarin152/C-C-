/*
Más aritmética de direcciones


La aritmética de direcciones también se puede considerar como aritmética de punteros porque las operaciones implican punteros.
Además de utilizar + y - para referirse a las posiciones de memoria siguientes y anteriores, puede utilizar los operadores de 
asignación para cambiar la dirección que contiene el puntero.

Por ejemplo:


 */
#include <stdio.h>

int main() {
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
        
    ptr = a; /* apunta al primer elemento del array */
    printf("%d %x\n", *ptr, ptr); /* 22 */
    ptr++;
    printf("%d %x\n", *ptr, ptr); /* 33 */
    ptr += 3;
    printf("%d %x\n", *ptr, ptr); /* 66 */
    ptr--;
    printf("%d %x\n", *ptr, ptr); /* 55 */
    ptr -= 2;
    printf("%d %x\n", *ptr, ptr); /* 33 */ 
}
/*
Cuando se incrementa un puntero, la dirección de memoria se incrementa en el Numero de bytes a los que apunta. 
En el programa anterior, el puntero se incrementa en 4 cuando se utiliza el operador de incremento (ptr++) porque el puntero está apuntando a un int.
También puedes utilizar los operadores ==, < y > para comparar las direcciones de los punteros.
*/