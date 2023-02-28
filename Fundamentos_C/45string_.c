/*
Salida de strings


La salida de string se maneja con las funciones fputs(), puts() y printf().
La función fputs() requiere el nombre de la cadena y un puntero al lugar donde 
se desea imprimir la cadena. Para imprimir en la pantalla, se utiliza stdout que hace referencia a la salida estándar.
Por ejemplo:
 */
#include <stdio.h>
int main()
{
    char ciudad[40];
    printf("Introduce tu ciudad favorita: ");
    gets(ciudad);
    // Nota: por seguridad, utilice
    // fgets(ciudad, 40, stdin);
    fputs(ciudad, stdout);
    printf(" es una ciudad divertida");

    return 0;
}
/*
La función puts() sólo toma un argumento de tipo string y también puede utilizarse para mostrar la salida. 
Sin embargo, añade una nueva línea a la salida.
Por ejemplo:

 */
#include <stdio.h>
int main()
{
    char city[40];
    printf("Enter your favorite city: ");
    gets(city);
    // Note: for safety, use
    // fgets(city, 40, stdin);

    puts(city);
    printf(" is a fun city.");

    return 0;
}