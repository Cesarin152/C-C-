/*
Passing by Value


By default, arguments in C++ are passed by value.
When passed by value, a copy of the argument is passed to the function.

Example:
 */
#include <iostream>
using namespace std;

void myFunc(int x) {
    x = 100;
}

int main() {
    int var = 20;
    myFunc(var);
    cout << var;
}
/*Como se pasa una copia del argumento a la función, el argumento original no es modificado por la función. */