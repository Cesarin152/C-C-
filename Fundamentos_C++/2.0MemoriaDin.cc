/*
Memoria dinámica


La memoria dinámica también se puede asignar a las matrices.
Por ejemplo:
 */
#include <iostream>
using namespace std;

int main()
{
    int *p = NULL; // Puntero inicializado con null
    p = new int[20]; // Solicita memoria
    delete [] p; // Borra el array apuntado por p

    return 0;
}
/* 
Observe los paréntesis en la sintaxis.
La asignación dinámica de memoria es útil en muchas situaciones, como cuando su programa depende de la entrada. 
Por ejemplo, cuando su programa necesita leer un archivo de imagen, no sabe de antemano el tamaño del archivo 
de imagen y la memoria necesaria para almacenar la imagen.
*/