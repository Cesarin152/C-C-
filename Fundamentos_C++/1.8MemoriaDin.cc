/*
Memoria dinámica


En el caso de las variables locales de la pila, la gestión de la memoria se realiza automáticamente.
En el montón, es necesario manejar manualmente la memoria asignada dinámicamente, y 
utilizar el operador de borrado para liberar la memoria cuando ya no se necesita. "delete pointer;"

Esta sentencia libera la memoria apuntada por el puntero.
 */
#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // solicita memoria
    *p = 5; // almacenar el valor

    cout << *p << endl; // utilizar el valor

    delete p; // liberar la memoria

    return 0;
}
//Olvidar liberar la memoria que ha sido asignada con la palabra clave new resultará en fugas de memoria, 
//porque esa memoria permanecerá asignada hasta que el programa se cierre.!!