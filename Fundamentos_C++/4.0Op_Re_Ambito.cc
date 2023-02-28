/*
Operador de resolución de ámbito


Los dos puntos dobles en el archivo fuente (.cpp) se llaman operador de resolución de ámbito,
y se utilizan para la definición del constructor:

#include "MyClass.h"

MyClass::MyClass()
{
   //ctor
}
El operador de resolución de ámbito se utiliza para definir las funciones miembro de una clase en particular, que ya han sido declaradas. 
Recuerda que hemos definido el prototipo del constructor en el fichero de cabecera.
Así que, básicamente, MyClass::MyClass() se refiere a la función miembro MyClass() -o, en este caso, constructor- de la clase MyClass.
 */