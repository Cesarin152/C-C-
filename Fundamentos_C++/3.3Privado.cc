/*
Privado


No se puede acceder a un miembro privado, ni siquiera verlo, desde fuera de la clase; sólo se puede acceder a él desde dentro de la clase.
Para acceder a los miembros privados se puede utilizar una función miembro pública. Por ejemplo:
 */
#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
        void setName(string x) {
            name = x;
        }
    private:
        string name;
};

int main() {
    myClass myObj;
    myObj.setName("John");

    return 0;
}
/*
Especificadores de acceso


Podemos añadir otro método público para obtener el valor del atributo.
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
El método getName() devuelve el valor del atributo privado name.
 */