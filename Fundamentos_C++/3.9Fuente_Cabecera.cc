/*
Fuente y cabecera


El archivo de cabecera (.h) contiene las declaraciones de funciones (prototipos) y las declaraciones de variables.
Actualmente incluye una plantilla para nuestra nueva clase MyClass, con un constructor por defecto.
MiClase.h

#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
  public:
    MyClass();
  protected:
  private:
};

#endif // MYCLASS_H

La implementación de la clase y sus métodos van en el archivo fuente (.cpp).
Actualmente sólo incluye un constructor vacío.
MiClase.cpp

#include "MyClass.h"

MyClass::MyClass()
{
   //ctor
}
Las declaraciones #ifndef y #define en el archivo de cabecera se discutirán en las próximas lecciones.
 */