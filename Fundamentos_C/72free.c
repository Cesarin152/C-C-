/*
La función free


La función free() es una función de gestión de memoria que se llama para liberar memoria. 
Al liberar memoria, hace que haya más disponible para su uso posterior en su programa.

Por ejemplo:
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr)); /* a block of 10 ints */
    if (ptr != NULL)
        *(ptr + 2) = 50;        /* assign 50 to third int */
    printf("%d\n", *(ptr + 2)); /* 50 */

    free(ptr);
    printf("%d\n", *(ptr + 2));

    return 0;
}