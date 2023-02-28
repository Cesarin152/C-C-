/*
Sentencias if anidadas
Una sentencia if puede incluir otra sentencia if para formar una sentencia anidada. La anidación de un if permite tomar una decisión basada en otros requisitos.
Considere la siguiente sentencia:
 */
#include <stdio.h>

int main() {
    int profit = 1400;
    int clients = 18;
    int bonus;
    
    if (profit > 1000)
        if (clients > 15)
            bonus = 100;
        else
            bonus = 25;
    
    printf("%d", bonus);
    return 0;
}
/* 
Un sangria adecuada de las sentencias anidadas ayudará a aclarar el significado al lector. 
Sin embargo, asegúrese de entender que una cláusula else está asociada con el if más cercano
a menos que se utilicen llaves { } para cambiar la asociación.
Por ejemplo:
*/
/*
#include <stdio.h>

int main() {
    int profit = 500;
    int clients = 12;
    int bonus = 0;
    
    if (profit > 1000) {
        if (clients > 15)
            bonus = 100;
    }
    else
        bonus = 25;
    
    printf("%d", bonus);
    return 0;
}
*/