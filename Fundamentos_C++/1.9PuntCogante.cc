/*
Punteros colgantes


El operador de borrado libera la memoria asignada a la variable, pero no borra el puntero en sí, 
ya que éste se almacena en la pila.

Los punteros que quedan apuntando a posiciones de memoria inexistentes se llaman punteros colgantes.
Por ejemplo:

 */
#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // solicita memoria
    *p = 5; // almacena el valor

    delete p; // libera la memoria
    // ahora p es un puntero colgante

    p = new int; // reutilizar para una nueva dirección

    return 0;
}
/*
El puntero NULL es una constante con valor cero que está definida en varias de las bibliotecas estándar, incluyendo iostream.
Es una buena práctica asignar NULL a una variable puntero cuando la declaras, en caso de que no tengas la dirección 
exacta a asignar. Un puntero al que se le asigna NULL se llama puntero nulo. Por ejemplo: int *ptr = NULL;
 */