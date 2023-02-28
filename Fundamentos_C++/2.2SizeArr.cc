/*
Tamaño de una matriz


El operador sizeof de C++ también se utiliza para determinar el tamaño de una matriz.
Por ejemplo:
 */
#include <iostream>
using namespace std;

int main()
{
    double myArr[10];
    cout << sizeof(myArr) << endl;

    return 0;
}
/*
En nuestra máquina, el doble ocupa 8 bytes.
El array almacena 10 dobles, por lo que todo el array ocupa 80 (8*10) bytes en la memoria.

Además, hay que dividir el número total de bytes de la matriz por el número de bytes de un 
solo elemento para saber cuántos elementos tiene la matriz.
Por ejemplo:
 */
#include <iostream>
using namespace std;

int main()
{
    int numbers[100];
    cout << sizeof(numbers) / sizeof(numbers[0]);

    return 0;
}