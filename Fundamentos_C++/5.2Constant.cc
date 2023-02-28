/*
Inicializadores de miembros


Escribamos el ejemplo anterior utilizando archivos de cabecera y fuente separados.
MiClase.h
clase MyClass {
  public:
   Myclass(int a, int b);
  private:
   int regVar
   const int constVar;
};
MyClass.cpp
MyClass::MyClass(int a, int b)
: regVar(a), constVar(b)
{
  cout << regVar << endl;
  cout << constVar << endl;
}

Hemos añadido declaraciones cout en el constructor para imprimir los valores de las variables miembro.
Nuestro siguiente paso es crear un objeto de nuestra clase en main, y utilizar el constructor para asignar valores.

 */
#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass(int a, int b);
    private:
        int regVar;
        const int constVar;
};

MyClass::MyClass(int a, int b)
: regVar(a), constVar(b)
{
    cout << regVar << endl;
    cout << constVar << endl;
}

int main() {
    MyClass obj(42, 33);
}
/*
El constructor se utiliza para crear el objeto, asignando dos parámetros a las variables miembro a través de la lista de inicialización de miembros.

Inicializadores de miembros


La lista de inicialización de miembros puede utilizarse para las variables regulares, y debe utilizarse para las variables constantes.
Incluso en los casos en los que las variables miembro no son constantes, tiene sentido utilizar la sintaxis del inicializador de miembros.
 */