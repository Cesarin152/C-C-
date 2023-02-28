/*
This


Cada objeto en C++ tiene acceso a su propia dirección a través de un puntero importante llamado puntero this.
Dentro de una función miembro This puede ser utilizado para referirse al objeto que lo invoca.
Vamos a crear una clase de ejemplo:
class MyClass {
 public:
  MyClass(int a) : var(a)
  { }
 private:
  int var;
};
Las funciones friends no tienen un puntero this, porque los friends no son miembros de una clase.
 */