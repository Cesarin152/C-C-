/*
Acceso a los miembros de una estructura


El acceso a los miembros de una variable estructural se realiza
utilizando el operador . (punto) entre el nombre de la variable y el nombre del miembro.
Por ejemplo, para asignar un valor al miembro edad de la variable struct s1,
utilice una sentencia como

s1.age = 19;

También puede asignar una estructura a otra del mismo tipo:
 */
#include <stdio.h>

struct student
{
    int age;
    int grade;
    char name[40];
};

int main()
{
    struct student s1 = {19, 9, "Jason"};
    struct student s2;

    printf("Assigning, s2 = s1\n");
    s2 = s1;

    printf("Results, Name: %s, Age: %d, Grade: %d\n", s2.name, s2.age, s2.grade);

    return 0;
}
/*
El siguiente código demuestra el uso de una estructura:
 */
#include <stdio.h>
#include <string.h>

struct course
{
    int id;
    char title[40];
    float hours;
};

int main()
{
    struct course cs1 = {341279, "Intro to C++", 12.5};
    struct course cs2;

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
La asignación de cadenas requiere strcpy() de la biblioteca string.h.
Tenga en cuenta también que los especificadores de formato %4.2f incluyen opciones de anchura y precisión.
 */