/*
Objetos constantes


Sólo los objetos no constantes pueden llamar a funciones no constantes.
Un objeto constante no puede llamar a funciones regulares. Por lo tanto, para que un objeto constante funcione se necesita una función constante.

Para especificar una función como miembro constante, la palabra clave const debe seguir al prototipo de la función, 
fuera del paréntesis de cierre de sus parámetros. Para las funciones miembro const que se definen fuera de la definición de la clase, 
la palabra clave const debe utilizarse tanto en el prototipo de la función como en su definición. Por ejemplo:
MiClase.h

clase MiClase
{
  pública:
    void myPrint() const;
};
 */

#include "MyClass.h"
#include <iostream>
using namespace std;
class MyClass
{
  public:
    void myPrint() const;
};
void MyClass::myPrint() const {
  cout <<"Hello"<<endl;
}
/*
Ahora la función myPrint() es una función miembro constante. Como tal, puede ser llamada por nuestro objeto constante:
 */
#include <iostream>
using namespace std;

class MyClass
{
    public:
        void myPrint() const;
};

void MyClass::myPrint() const {
    cout <<"Hello"<<endl;
}

int main() {
    const MyClass obj;
    obj.myPrint();
}
/*
Objetos constantes


El intento de llamar a una función regular desde un objeto constante da lugar a un error.
Además, se genera un error del compilador cuando cualquier función miembro constante intenta modificar una variable miembro o llamar a una función miembro no constante.
La definición de objetos y funciones constantes asegura que los miembros de datos correspondientes no puedan ser modificados inesperadamente.
 */