/*
Punteros


Toda variable es una posición de memoria, que tiene su dirección definida.
Se puede acceder a esa dirección utilizando el operador ampersand (&) (también llamado operador de dirección-de), que denota una dirección en memoria.

Por ejemplo:

 */
#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    cout << &score << endl;

    return 0;
}
//Esto produce la dirección de memoria, que almacena la puntuación variable.!!