/*
Composición


En el mundo real, los objetos complejos suelen construirse con objetos más pequeños y sencillos. Por ejemplo, un coche se ensambla con un chasis metálico, un motor, neumáticos y un gran número de otras piezas. Este proceso se llama composición.

En C++, la composición de objetos implica el uso de clases como variables miembro en otras clases.
Este programa de ejemplo demuestra la composición en acción. Contiene las clases Persona y Cumpleaños, y cada Persona tendrá como miembro un objeto Cumpleaños.
Cumpleaños:
clase Cumpleaños {
 public:
  Cumpleaños(int m, int d, int y)
  : mes(m), día(d), año(y)
  { 
  }
 private
   int mes;
   int día;
   int año;
};
Nuestra clase Cumpleaños tiene tres variables miembro. También tiene un constructor que inicializa los miembros utilizando una lista de inicialización de miembros.
La clase fue declarada en un solo archivo en aras de la simplicidad. Como alternativa, podrías utilizar archivos de cabecera y de código fuente.

Composición


Añadamos también una función printDate() a nuestra clase Birthday:
class Birthday {
 public:
  Birthday(int m, int d, int y)
  : month(m), day(d), year(y)
  {
  }
  void printDate()
  {
   cout<<month<<"/"<<day
   <<"/"<<year<<endl;
  }
 private:
  int month;
  int day;
  int year;
};
Añade una función printDate() a nuestra clase Birthday.


 */