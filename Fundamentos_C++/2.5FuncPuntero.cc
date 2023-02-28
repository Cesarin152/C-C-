/*
Pasar por referencia


El paso por referencia copia la dirección de un argumento en el parámetro formal.
Dentro de la función, la dirección se utiliza para acceder al argumento real utilizado en la llamada. 
Esto significa que los cambios realizados en el parámetro afectan al argumento.
Para pasar el valor por referencia, los punteros de los argumentos se pasan a las funciones como cualquier otro valor.

*/
#include <iostream>
using namespace std;

void myFunc(int *x) {
    *x = 100;
}

int main() {
    int var = 20;
    myFunc(&var);
    cout << var;
}
/*
Como puede ver, pasamos la variable directamente a la función utilizando el operador de dirección &.
La declaración de la función dice que la función toma un puntero como parámetro (definido mediante el operador *).
Como resultado, la función ha cambiado realmente el valor del argumento, ya que ha accedido a él a través del puntero.

Resumen


Paso por valor: Este método copia el valor real de un argumento en el parámetro formal de la función. 
En este caso, los cambios realizados en el parámetro dentro de la función no afectan al argumento.

Paso por referencia: Este método copia la referencia de un argumento en el parámetro formal. 
Dentro de la función, la referencia se utiliza para acceder al argumento real utilizado en la llamada. 
Por lo tanto, los cambios realizados en el parámetro también afectan al argumento.
En general, pasar por valor es más rápido y efectivo. Pase por referencia cuando su función necesite 
modificar el argumento, o cuando necesite pasar un tipo de datos, que utiliza mucha memoria y es caro de copiar.
*/