/*
Declaraciones con estructuras


Para declarar variables de un tipo de datos de estructura,
se utiliza la palabra clave struct seguida de la etiqueta struct y, a continuación, el nombre de la variable.
Por ejemplo, las sentencias siguientes declaran un tipo de datos de 
estructura y luego utilizan la estructura de estudiante para declarar las variables s1 y s2

*/
#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    /* declare two variables */
    struct student s1;
    struct student s2;
    printf("Size of int: %ld\n",sizeof(int));
    printf("Size of char: %ld\n",sizeof(char));
    int sizeName=sizeof(s1.name);
    printf("Size of array(name) %ld",sizeName);
    printf("\nSize of Struct : %ld\n",sizeof(s1));
    s1.age = 19;
    s1.grade = 9;
    sprintf(s1.name, "John Bighimer");
    
    s2.age = 22;
    s2.grade = 10;
    sprintf(s2.name, "Batman Jokerson");
    
    printf("Student: %s, age: %d, grade: %d\n", s1.name, s1.age,s1.grade);
    printf("Student: %s, age: %d, grade: %d\n", s2.name, s2.age,s2.grade);
    
    return 0;
}
/*
Una variable struct se almacena en un bloque contiguo de memoria.
El operador sizeof debe utilizarse para obtener el Numero de bytes 
necesarios para una struct, al igual que con los tipos de datos básicos.
 */