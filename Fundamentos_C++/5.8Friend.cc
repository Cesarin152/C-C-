/*
Funciones amigas


Ahora podemos crear un objeto en main y llamar a la función someFunc():
 */
#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass() {
            regVar = 0;
        }
    private:
        int regVar;

    friend void someFunc(MyClass &obj);
};

void someFunc(MyClass &obj) {
    obj.regVar = 42;
    cout << obj.regVar;
}

int main() {
    MyClass obj;
    someFunc(obj);
}
/*
someFunc() tenía la capacidad de modificar el miembro privado del objeto e imprimir su valor.

Los casos típicos de uso de las funciones amigas son las operaciones que se realizan entre dos clases diferentes accediendo a los miembros privados de ambas.
Se puede declarar una función amiga en cualquier Numero de clases.
De forma similar a las funciones amigas, se puede definir una clase amiga que tenga acceso a los miembros privados de otra clase
*/