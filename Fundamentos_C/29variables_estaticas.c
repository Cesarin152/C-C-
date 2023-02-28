/*
Variables estáticas


Las variables estáticas tienen un ámbito local pero no se destruyen cuando se sale de una función. 
Por lo tanto, una variable estática conserva su valor durante toda la vida del programa y se puede 
acceder a ella cada vez que se vuelve a entrar en la función.Una variable estática se inicializa 
cuando se declara y requiere el prefijo static.
El siguiente programa utiliza una variable estática:

 */
#include <stdio.h>

void say_hello();

int main() {	
    int i;

    for (i = 0; i < 5; i++) {
        say_hello();
    }
   
    return 0;
}

void say_hello() {
    static int num_calls = 1;

    printf("Hello number %d\n", num_calls);
    num_calls++;
}
