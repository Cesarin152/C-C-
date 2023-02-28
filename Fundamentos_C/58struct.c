/*
Uso de typedef
La palabra clave typedef crea una definición de tipo que simplifica el código y hace que 
un programa sea más fácil de leer. typedef se utiliza comúnmente con estructuras porque 
elimina la necesidad de utilizar la palabra clave struct al declarar variables.
Por ejemplo:
 */
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char title[40];
    float hours;
} course;

int main()
{
    course cs1;
    course cs2;

    cs1.id = 123456;
    strcpy(cs1.title, "JavaScript Basics");
    cs1.hours = 12.30;

    /* initialize cs2 */
    cs2.id = 341281;
    strcpy(cs2.title, "Advanced C++");
    cs2.hours = 14.25;

    /* display course info */
    printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
    printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);

    return 0;
}
/*
Obsérvese que ya no se utiliza una etiqueta de estructura, sino que aparece un nombre de tipografía antes de la declaración de estructura.
Ahora la palabra struct ya no es necesaria en las declaraciones de variables, lo que hace que el código sea más limpio y fácil de leer.
 */