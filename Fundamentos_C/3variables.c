/* Variables


Una variable es el nombre de un área de la memoria.
El nombre de una variable (también llamado identificador) debe comenzar con una letra o un guión bajo y puede estar compuesto por letras, dígitos y el carácter de guión bajo.
Las convenciones de nomenclatura de las variables difieren, sin embargo, el uso de letras minúsculas con un guión bajo para separar las palabras es común (snake_case).
Las variables también deben ser declaradas como un tipo de datos antes de ser utilizadas.

El valor de una variable declarada se cambia con una sentencia de asignación.
Por ejemplo, las siguientes sentencias declaran una variable entera a,b y luego le asignan el valor 8 y 34:*/
#include <stdio.h>

int main() {
    int a, b;
    float salario = 56.23;
    char letra = 'Z';
    a = 8;
    b = 34;
    int c = a+b;

    printf("%d \n", c);
    printf("%f \n", salario);
    printf("%c \n", letra);

    return 0;
}
/*Como puede ver, puede declarar múltiples variables en una sola línea separándolas con una coma. 
Además, observe el uso de especificadores de formato para la salida de float (%f) y char (%c).

!El lenguaje de programación C distingue entre mayúsculas y minúsculas, 
por lo que mi_Variable y mi_variable son dos identificadores diferentes.
*/