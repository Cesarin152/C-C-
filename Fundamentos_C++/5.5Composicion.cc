/*
Composition


Let's add a printInfo() function to our Person class, that prints the data of the object:
class Person {
 public:
  Person(string n, Birthday b)
  : name(n),
  bd(b)
  {
  }
  void printInfo()
  {
   cout << name << endl;
   bd.printDate();
  }
 private:
  string name;
  Birthday bd;
};

Observa que podemos llamar a la función printDate() del miembro bd, ya que es de tipo Birthday, que tiene definida esa función.
 */