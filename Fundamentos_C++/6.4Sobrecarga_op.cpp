/*
Sobrecarga del operador


Necesitamos que nuestro operador + devuelva un nuevo objeto MyClass con una 
variable miembro igual a la suma de las variables miembro de los dos objetos.
class MyClass {
 public:
  int var;
  MyClass() {}
  MyClass(int a)
  : var(a) { }

  MyClass operator+(MyClass &obj) {
   MyClass res;
   res.var= this->var+obj.var;
   return res; 
  }
};
  */
/*
Aquí, declaramos un nuevo objeto res. Luego asignamos la suma de las variables miembro del objeto actual (this) 
y del objeto parámetro (obj) a la variable miembro var del objeto res. El objeto res es devuelto como resultado.

Esto nos permite crear objetos en main y utilizar el operador sobrecargado + para sumarlos.
 */
#include <iostream>
using namespace std;

class MyClass {
    public:
        int var;
        MyClass() { }
        MyClass(int a)
        : var(a) { }

        MyClass operator+(MyClass &obj) {
            MyClass res;
            res.var= this->var+obj.var;
            return res; 
        }
};

int main() {
    MyClass obj1(12), obj2(55);
    MyClass res = obj1+obj2;

    cout << res.var;
}
/*
Con los operadores sobrecargados, se puede utilizar cualquier lógica personalizada que se necesite. 
Sin embargo, no es posible alterar la precedencia, la agrupación o el Numero de operandos de los operadores.
 */