/*
Estructuras como parámetros de función


Una función puede tener parámetros de estructura que aceptan argumentos por valor 
cuando lo único que se necesita es una copia de la variable de estructura.
Para que una función cambie los valores reales de una variable de estructura,
se necesitan parámetros de puntero.

Por ejemplo:
 */
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours; 
} course;

void update_course(course *cs2);
void display_course(course cs2);

int main() {
    course cs1;
    update_course(&cs1);
    display_course(cs1);
    return 0;
}

void update_course(course *cs2) {
    strcpy(cs2->title, "C++ Fundamentals");
    cs2->id = 111;
    cs2->hours = 12.30;
}

void display_course(course cs2) {
    printf("%d\t%s\t%3.2f :v \n", cs2.id, cs2.title, cs2.hours);
} 
/*
Como puede ver, update_course() toma un puntero como parámetro, 
mientras que display_course() toma la estructura por valor.

 */