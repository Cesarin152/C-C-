/*
Uso de bucles con matrices


Muchos algoritmos requieren acceder a cada elemento de un array para comprobar datos, almacenar información y otras tareas. 
Esto puede hacerse en un proceso llamado recorrer el array, que a menudo se implementa con un bucle for porque la variable de 
control del bucle corresponde naturalmente a los índices del array.
Considere el siguiente programa:

 */
#include <stdio.h>

int main() {
    float purchases[3] = {10.99, 14.25, 90.50};
    float total = 0;
    int k;

    /* total the purchases */
    for (k = 0; k < 3; k++) {
        total += purchases[k];
    }
   
    printf("Purchases total is %6.2f\n", total);
    /* Output:  Purchases total is 115.74 */ 
    
	return 0;
}
/*
La variable de control del bucle itera de 0 a uno menos que el Numero de elementos para igualar los valores del índice.
Los bucles también son útiles para la asignación.
Por ejemplo:

 */
#include <stdio.h>

int main() {
    int a[10];
    int k;
    
    for (k = 0; k < 10; k++) {
        a[k] = k * 10;
    } 

    for (k = 0; k < 10; k++) {
        printf("%d \n", a[k]);
    }
   
	return 0;
}