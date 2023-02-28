/*
Punteros


También podemos utilizar un puntero para acceder a los miembros del objeto.
El siguiente puntero apunta al objeto obj:
MyClass obj;
MyClass *ptr = &obj;

El tipo del puntero es MyClass ya que apunta a un objeto de ese tipo.

Operador de selección

El operador de selección de miembros en forma de flecha (->) se utiliza para acceder a los miembros de un objeto con un puntero.
 */
#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass();
        void myPrint();
};

MyClass::MyClass() {
}
void MyClass::myPrint() {
    cout <<"Hello"<<endl;
}

int main() {
    MyClass obj;
    MyClass *ptr = &obj;
    ptr->myPrint();
}
/*
Cuando se trabaja con un objeto, se utiliza el operador de selección de miembros punto (.).
Cuando se trabaja con un puntero al objeto, se utiliza el operador de selección de miembros de flecha (->).
 */