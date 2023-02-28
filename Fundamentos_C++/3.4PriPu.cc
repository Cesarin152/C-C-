/* 
Especificadores de acceso


Ponerlo todo junto:
*/
#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
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
    myObj.setName("John");
    cout << myObj.getName();

    return 0;
}
/*
Utilizamos la encapsulación para ocultar el atributo name del código exterior. 
Luego proporcionamos acceso a él usando métodos públicos. Los datos de nuestra clase pueden ser leídos y modificados sólo a través de esos métodos.
Esto permite cambios en la implementación de los métodos y atributos, sin afectar al código exterior.
 */