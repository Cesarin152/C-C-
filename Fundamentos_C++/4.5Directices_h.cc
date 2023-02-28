/*
#ifndef & #define


Creamos archivos de cabecera y fuente separados para nuestra clase, lo que dio como resultado este archivo de cabecera.

 */
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
/*
ifndef significa "si no está definido". El primer par de sentencias le dice al programa que defina el archivo de cabecera MyClass si aún no ha sido definido.
endif termina la condición.

Esto evita que un archivo de cabecera se incluya más de una vez dentro de un archivo.
 */