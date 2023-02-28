/*
Composición


A continuación, podemos crear la clase Persona, que incluye la clase Cumpleaños.
#include <string>
#include "Birthday.h"

class Person {
 public:
  Person(string n, Birthday b)
  : name(n),
   bd(b)
  {
  }
 private:
  string name;
  Birthday bd;
};

La clase Persona tiene un nombre y un miembro Cumpleaños, y un constructor para inicializarlos.
Asegúrate de que se incluyen los archivos de cabecera correspondientes.
En la próxima lección veremos más sobre la composición.
*/