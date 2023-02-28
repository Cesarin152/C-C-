/*
Operaciones con punteros


Existen dos operadores para los punteros:
Operador de dirección (&): devuelve la dirección de memoria de su operando.
Operador de contenido (o desreferencia) (*): devuelve el valor de la variable situada en la dirección especificada por su operando.

Por ejemplo:

 */
#include <iostream>
using namespace std;

int main()
{
    int var = 50;
    int  *p;
    p = &var;

    cout << var << endl;
    // Outputs 50 (the value of var)

    cout << p << endl;
    // Outputs 0x29fee8 (var's memory location)

    cout << *p << endl;
    /* Outputs 50 (the value of the variable
     stored in the pointer p) */

    return 0;
}
/*
El asterisco (*) se utiliza al declarar un puntero con el simple propósito de indicar que se trata de un puntero 
(El asterisco forma parte de su especificador de tipo compuesto). No hay que confundirlo con el operador de desreferencia,
que se utiliza para obtener el valor situado en la dirección especificada. Son simplemente dos cosas diferentes representadas con el mismo signo.

 */