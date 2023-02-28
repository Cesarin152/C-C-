/*
This


Para ver el resultado, podemos crear un objeto de nuestra clase y llamar a la función miembro
 */
#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass(int a) : var(a)
        { }
        void printInfo() {
            cout << var <<endl;
            cout << this->var <<endl;
            cout << (*this).var <<endl; 
        }
    private:
        int var;
};

int main() {
    MyClass obj(42);
    obj.printInfo();
}
/* 
Las tres formas de acceder a la variable miembro funcionan.
Tenga en cuenta que sólo las funciones miembro tienen un puntero de este tipo.
*/