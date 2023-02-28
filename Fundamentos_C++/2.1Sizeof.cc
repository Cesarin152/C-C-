/*
sizeof


Aunque el tamaño asignado a los distintos tipos de datos depende de la arquitectura del ordenador 
que se utilice para ejecutar los programas, C++ garantiza un tamaño mínimo para los tipos de datos básicos:

Categoria       Tipo        Tamaño minimo
boolean         bool        1 byte
character       char        1 byte
intenger        short       2 byte
                int         2 byte
                long        4 bytes
                long long   8 bytes
float           float       4 bytes
                double      8 bytes
                long double 8 bytes

El operador sizeof puede utilizarse para obtener el tamaño de una variable o tipo de datos, en bytes.
Sintaxis: sizeof (data type)

El operador sizeof determina y devuelve el tamaño de un tipo o de una variable en bytes.
Por ejemplo:
 */
#include <iostream>
using namespace std;

int main()
{
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    int var = 50;
    cout << "var: " << sizeof(var) << endl;

    return 0;
}
//Los valores de salida pueden variar, según el ordenador y el compilador utilizados.