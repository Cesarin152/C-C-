/*
208 Comments
Friend Functions


The function someFunc() is defined as a regular function outside the class. It takes an object of type MyClass as its parameter, and is able to access the private data members of that object.
class MyClass {
 public:
  MyClass() {
   regVar = 0;
  }
 private:
  int regVar;
    
 friend void someFunc(MyClass &obj);
};

void someFunc(MyClass &obj) {
  obj.regVar = 42;
  cout << obj.regVar;
}
La función someFunc() cambia el miembro privado del objeto e imprime su valor.
Para que sus miembros sean accesibles, la clase tiene que declarar la función como amiga en su definición. 
No se puede "hacer" que una función sea amiga de una clase sin que la clase "regale" su amistad a esa función.
 */