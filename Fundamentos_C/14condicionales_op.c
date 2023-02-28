/*
Operadores relacionales

Hay seis operadores relacionales que se pueden utilizar para formar una expresión booleana, 
que devuelve verdadero o falso:
< menos que
<= menor o igual que
> mayor que
>= mayor que o igual a
== igual a
!= no igual a

 */
/*
#include <stdio.h>

int main() {
    int num = 41;
    num += 1;// num=num+1; , num++;
    if (num == 42) {
        printf("¡Has ganado!");
    }
    return 0;
}
*/
/*
Una expresión que se evalúa como un valor distinto de cero se considera verdadera.
Por ejemplo:
 */
#include <stdio.h>
int main() {
    int in_stock = 20;
    if (in_stock)
        printf("Order received.\n"); 
    return  0;
}