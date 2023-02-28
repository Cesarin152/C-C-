/*
This


El método printInfo() ofrece tres alternativas para imprimir la variable miembro de la clase.
 */
#include <iostream>
using namespace std;
class MyClass {
    public:
        MyClass(int a) : var(a)
        { }
        void printInfo() {
        cout << var<<endl;
        cout << this->var<<endl;
        cout << (*this).var<<endl; 
    }
    private:
        int var;
};
/*
Las tres alternativas producirán el mismo resultado.
se trata de un puntero al objeto, por lo que se utiliza el operador de selección de flechas para seleccionar la variable miembro.
 */