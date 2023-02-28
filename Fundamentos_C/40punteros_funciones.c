/*
Punteros y funciones


Los punteros amplían enormemente las posibilidades de las funciones. Ya no estamos limitados a devolver un valor. Con los parámetros de los punteros, las funciones pueden alterar los datos reales en lugar de una copia de los mismos.
Para cambiar los valores reales de las variables, la sentencia que llama pasa las direcciones a los parámetros punteros de una función.
Por ejemplo, el siguiente programa intercambia dos valores:
 */
#include <stdio.h>

void swap (int *num1, int *num2);

int main() {
    int x = 25;
    int y = 100;

    printf("x is %d, y is %d\n", x, y); 
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y); 

    return 0;
}
 
void swap (int *num1, int *num2) {
    int temp;
    
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}/*
El programa intercambia los valores reales de las variables, ya que la función accede a ellas por dirección utilizando punteros.
 */