/*
Uso de punteros

Aquí asignamos la dirección de una variable al puntero.

 */
#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    int *scorePtr;
    scorePtr = &score;

    cout << scorePtr << endl;

    return 0;
}
/*
El código anterior declara un puntero a un entero llamado scorePtr, y le asigna la ubicación de 
memoria de la variable score utilizando el operador ampersand (dirección-de).

Ahora, el valor de scorePtr es la ubicación de memoria de score.
 */