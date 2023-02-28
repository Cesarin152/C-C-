/*
Funciones miembro


Vamos a crear una función de ejemplo llamada myPrint() en nuestra clase.
MiClase.h



 */

#include "MyClass.h"
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
/*
Dado que myPrint() es una función miembro normal, es necesario especificar su tipo de retorno tanto en la declaración como en la definición.
 */