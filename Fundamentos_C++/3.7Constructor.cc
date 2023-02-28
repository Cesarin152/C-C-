/*
Constructores


Al crear un objeto, ahora es necesario pasar el parámetro del constructor, como lo harías al llamar a una función:

 */
#include <iostream>
using namespace std;

class myClass {
    private:
        string name;
    public:
        myClass(string nm) {
            setName(nm);
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    
};

int main() {
    myClass ob1("David");
    myClass ob2("Amy");
    cout << ob1.getName()<<endl;
    cout<<ob2.getName();
    return 0;
}
/*
Hemos definido dos objetos, y hemos utilizado el constructor para pasar el valor inicial del atributo nombre para cada objeto.
Es posible tener múltiples constructores que toman diferentes Numeros de parámetros.
 */