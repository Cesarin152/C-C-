/*
Estructuras con uniones

Las uniones se utilizan a menudo dentro de las estructuras, ya que una estructura puede tener un miembro para llevar la cuenta de qué miembro de la unión almacena un valor.
Por ejemplo, en el siguiente programa, una estructura de vehículo utiliza un Numero de Identificación del Vehículo (VIN) o un ID asignado, pero no ambos:

 */
#include <stdio.h>
#include <string.h>

typedef struct
{
    char make[20];
    int model_year;
    int id_type; /* 0 for id_num, 1 for VIN */
    union
    {
        int id_num;
        char VIN[20];
    } id;
} vehicle;

int main()
{
    vehicle car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123098;

    printf("Car %s, %d", car1.make, car1.model_year);

    return 0;
}
/*
Nótese que la unión se declaró dentro de la estructura. Al hacer esto, 
se requería un nombre de unión al final de la declaración.
Una unión con una etiqueta de unión podría haber sido declarada fuera de la 
estructura, pero con un uso tan específico, la unión dentro de la estructura facilita la comprensión del código.

Observe también que el operador punto se utiliza dos veces para acceder a 
los miembros de la unión de los miembros de la estructura.

El id_type mantiene la pista de qué miembro de la unión almacena un valor. Las siguientes sentencias muestran los datos de car1, utilizando el id_type para determinar qué miembro de la unión hay que leer:

 */
#include <stdio.h>
#include <string.h>

typedef struct
{
    char make[20];
    int model_year;
    int id_type; /* 0 for id_num, 1 for VIN */
    union
    {
        int id_num;
        char VIN[20];
    }id;
}vehicle;

int main()
{
    vehicle car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123098;

    printf("Make: %s\n", car1.make);
    printf("Model Year: %d\n", car1.model_year);
    if (car1.id_type == 0)
        printf("ID: %d\n", car1.id.id_num);
    else
        printf("ID: %s\n", car1.id.VIN);

    return 0;
}
//Una unión también puede contener una estructura.