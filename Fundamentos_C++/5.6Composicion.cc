/* 
Composición


Ahora que hemos definido nuestras clases Birthday y Person, podemos ir a nuestro main, crear un objeto Birthday, y luego pasarlo a un objeto Person.

*/
#include <iostream>
using namespace std;

class Birthday {
    public:
        Birthday(int m, int d, int y)
        : month(m), day(d), year(y)
        {  }
        void printDate()
        {
            cout<<month<<"/"<<day <<"/"<<year<<endl;
        }
    private:
        int month;
        int day;
        int year;
};

class Person {
    public:
        Person(string n, Birthday b)
        : name(n), bd(b)
        {  }
        void printInfo()
        {
            cout << name << endl;
            bd.printDate();
        }
    private:
        string name;
        Birthday bd;
};

int main() {
    Birthday bd(2, 21, 1985);
    Person p("David", bd);
    p.printInfo();
}
/*
Hemos creado un objeto Cumpleaños para la fecha del 21/2/1985. A continuación, creamos un objeto Persona y pasamos el objeto Cumpleaños a su constructor. 
Finalmente, utilizamos la función printInfo() del objeto Persona para imprimir sus datos.En general, la composición sirve para mantener cada clase individual 
relativamente simple, sencilla y centrada en la realización de una tarea. También permite que cada subobjeto sea autocontenido, lo que permite su reutilización (podemos utilizar la clase Birthday dentro de otras clases).
  */