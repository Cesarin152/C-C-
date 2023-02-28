/*
Destructores


Después de declarar el destructor en el archivo de cabecera, podemos escribir la implementación en el archivo fuente MyClass.cpp:

 */
#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
    cout<<"Constructor"<<endl;
}

MyClass::~MyClass()
{
    cout<<"Destructor"<<endl;
}
/*
Observa que hemos incluido la cabecera <iostream>, para poder utilizar cout.

Destructores


Como los destructores no pueden recibir parámetros, tampoco pueden ser sobrecargados.
Cada clase tendrá un solo destructor.
Definir un destructor no es obligatorio; si no lo necesitas, no tienes que definirlo.
 */