/*
Inicializadores de miembros


Recuerda que las constantes son variables que no pueden ser modificadas, y que todas las variables const deben ser inicializadas en el momento de su creación.

C++ proporciona una práctica sintaxis para inicializar miembros de la clase llamada lista de inicializadores de miembros (también llamada inicializador del constructor).
Pulse en Continuar para saber más.

Inicializadores de miembros


Considere la siguiente clase:

class MyClass {
  public:
   MyClass(int a, int b) {
    regVar = a;
    constVar = b;
   }
  private:
    int regVar;
    const int constVar;
};
Esta clase tiene dos variables miembro, regVar y constVar. También tiene un constructor que toma dos parámetros, que se utilizan para inicializar las variables miembro.
La ejecución de este código devuelve un error, porque una de sus variables miembro es una constante, a la que no se le puede asignar un valor después de la declaración.

En casos como éste, se puede utilizar una lista de inicialización de miembros para asignar valores a las variables miembro.
class MyClass {
 public:
  MyClass(int a, int b)
  : regVar(a), constVar(b)
  {
  }
 private:
  int regVar;
  const int constVar;
};
Observe que en la sintaxis, la lista de inicialización sigue a los parámetros del constructor. 
La lista comienza con dos puntos (:), y luego enumera cada variable a ser inicializada, 
junto con el valor para esa variable, con una coma para separarlas. Utilice la sintaxis variable(valor) para asignar valores.
La lista de inicialización elimina la necesidad de colocar asignaciones 
explícitas en el cuerpo del constructor. Además, la lista de inicialización no termina con un punto y coma.
 */