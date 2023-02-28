/*
Sobrecarga de operadores
La mayoría de los operadores incorporados en C++ pueden redefinirse o sobrecargarse.
Así, los operadores pueden utilizarse también con tipos definidos por el usuario (por ejemplo, permitiendo sumar dos objetos).
Esta tabla muestra los operadores que pueden ser sobrecargados.

Los operadores que no pueden ser sobrecargados incluyen :: | .* | . | ?:


Sobrecarga de operadores

Vamos a declarar una clase de ejemplo para demostrar la sobrecarga de operadores:
class MyClass {
 public:
  int var;
  MyClass() {}
  MyClass(int a)
  : var(a) { }
};
Nuestra clase tiene dos constructores y una variable miembro.
Vamos a sobrecargar el operador +, para poder sumar dos objetos de nuestra clase.

Sobrecarga de operadores


Los operadores sobrecargados son funciones definidas por la palabra clave operator seguida del símbolo del operador que se define.
Un operador sobrecargado es similar a otras funciones en el sentido de que tiene un tipo return y una lista de parámetros.

En nuestro ejemplo vamos a sobrecargar el operador +. Devolverá un objeto de nuestra clase y tomará un objeto de nuestra clase como parámetro.
class MyClass {
 public:
  int var;
  MyClass() {}
  MyClass(int a)
  : var(a) { }

  MyClass operator+(MyClass &obj) {
  }
};
Ahora, tenemos que definir lo que hace la función.
 */