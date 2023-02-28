/*
Creación de una clase


Creemos una clase con un método público, y hagamos que imprima "Hola".


class BankAccount {
  public:
    void sayHi() {
      cout << "Hi" << endl;
    }
};
El siguiente paso es instanciar un objeto de nuestra clase BankAccount, 
de la misma manera que definimos las variables de un tipo, con la diferencia de que el tipo de nuestro objeto será BankAccount
 */
#include <iostream>
using namespace std;

class BankAccount {
    public:
        void sayHi() {
            cout << "Hi" << endl;
        }
};

int main() 
{
    BankAccount test;
    test.sayHi();
}
/*
Nuestro objeto llamado test tiene definidos todos los miembros de la clase.
Fíjate en el separador de puntos (.) que se utiliza para acceder y llamar al método del objeto.
Debemos declarar una clase antes de usarla, como hacemos con las funciones.

 */