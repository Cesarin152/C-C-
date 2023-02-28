/*
Entrada con formato


La función scanf() se utiliza para asignar la entrada a las variables.
Una llamada a esta función escanea la entrada de acuerdo con los especificadores 
de formato que convierten la entrada según sea necesario.
Si la entrada no se puede convertir, la asignación no se realiza.
La sentencia scanf() espera la entrada y luego realiza las asignaciones:

 *//*
#include <stdio.h>

int main() {
    int x;
    float num;
    char text[20];
    scanf("%d %f %s", &x, &num, text);
    return 0;
}*/
/*
Si se escribe 10 22.5 abcd y se pulsa Intro, se asigna 10 a x, 22.5 a num y abcd a text.
Ten en cuenta que el & debe usarse para acceder a las direcciones de las variables. El & no es necesario para un string '%s' porque un nombre de string actúa como puntero.

Los especificadores de formato comienzan con un signo de porcentaje '%' y se utilizan para asignar 
valores a los argumentos correspondientes después de la string de control. Los espacios en blanco, los tabuladores y las nuevas líneas se ignoran.
Un especificador de formato puede incluir varias opciones junto con un carácter de conversión:
%[*][campo_máximo]carácter de conversión
El carácter opcional * omitirá el campo de entrada.
El opcional campo_máximo da el número máximo de caracteres a asignar a un campo de entrada.
El carácter de conversión convierte el argumento, si es necesario, al tipo indicado:
d decimal
c carácter
s string
f float
x hexadecimal
 */


#include <stdio.h>

int main() {
    int x, y;
    char text[20];

    scanf("%2d %d %*f %5s", &x, &y, text);
    //entrada: 1234 5,7 elefante 
    printf("%d %d %s", x, y, text);
    //salida: 12 34 elefa

    return 0;
} 


