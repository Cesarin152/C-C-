/*
Especificadores de acceso


Los especificadores de acceso se utilizan para establecer los niveles de acceso a determinados miembros de la clase.
Los tres niveles de especificadores de acceso son public, protected y private.

Un miembro público es accesible desde fuera de la clase, y en cualquier lugar dentro del ámbito del objeto de la clase.

Por ejemplo:

 */
#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
        string name;
    public:
        void showInfo()
        {
            cout<<name;
        }
};

int main() {
    myClass myObj;
    myObj.name = "SoloLearn";
    cout << myObj.name<<endl;
    myObj.showInfo();

    return 0;
}