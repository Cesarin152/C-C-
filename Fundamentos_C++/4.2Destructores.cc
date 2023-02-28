/*
Destructores


¿Recuerdas los constructores? Son funciones miembros especiales que se llaman automáticamente cuando se crea un objeto.
Los destructores también son funciones especiales. Son llamadas cuando un objeto es destruido o borrado.
Los objetos se destruyen cuando salen del ámbito, o cuando se aplica la expresión delete a un puntero dirigido a un objeto de una clase.

Destructores


El nombre de un destructor será exactamente el mismo que el de la clase, sólo que precedido de una tilde (~). Un destructor no puede devolver ningún valor ni tomar ningún parámetro.

clase MyClass {
  public: 
    ~MyClass() {
     // algo de código
    }
};

Los destructores pueden ser muy útiles para liberar recursos antes de salir del programa. Esto puede incluir el cierre de archivos, la liberación de memoria, etc.

Destructores


Por ejemplo, vamos a declarar un destructor para nuestra clase MyClass, en su archivo de cabecera MyClass.h:
class MyClass
{
  public:
   MyClass();
   ~MyClass();
};
Declara un destructor para nuestra clase MyClass.
 */