/*
Destructores


Volvamos a nuestro main.
 */
#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass();
        ~MyClass();
};

MyClass::MyClass()
{
    cout<<"Constructor"<<endl;
}

MyClass::~MyClass()
{
    cout<<"Destructor"<<endl;
}

int main() {
    MyClass obj;
    return 0;
}

/*
Incluimos el archivo de cabecera de la clase y luego creamos un objeto de ese tipo.
Esto devuelve la siguiente salida:
Constructor
Destructor
Cuando el programa se ejecuta, primero crea el objeto y llama al constructor. 
El objeto se borra y se llama al destructor cuando se termina la ejecución del programa.
Recuerda que imprimimos "Constructor" desde el constructor y "Destructor" desde el destructor.
 */