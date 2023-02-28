/*
Constructores


Los constructores de clases son funciones especiales de los miembros de una clase. Se ejecutan cada vez que se crean nuevos objetos dentro de esa clase.

El nombre del constructor es idéntico al de la clase. No tiene ningún tipo de return, ni siquiera void.

Por ejemplo:
 */
#include <iostream>
using namespace std;

class myClass {
    public:
        myClass() {
            cout <<"Hey";
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main() {
    myClass myObj;

    return 0;
}
/*
Ahora, al crear un objeto de tipo myClass, se llama automáticamente al constructor.
 */