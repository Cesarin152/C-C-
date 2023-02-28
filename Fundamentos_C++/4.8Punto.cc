/*
Operador de punto


A continuación, crearemos un objeto de tipo MyClass, y llamaremos a su función myPrint() utilizando el operador punto (.):
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
    obj.myPrint();
}