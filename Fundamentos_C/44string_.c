/*
Entrada de strings


Los programas son a menudo interactivos, pidiendo al usuario que introduzca datos.
Para recuperar una línea de texto u otra string del usuario, C proporciona las funciones scanf(), gets() y fgets().
Puede utilizar scanf() para leer la entrada según los especificadores de formato.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);
    
    printf("\nHi, %s. Your age is %d", first_name, age);
    
    return 0;
}
/*
Cuando se utiliza scanf() para leer una string, no es necesario que & acceda a la dirección de la variable
porque un nombre de matriz actúa como puntero. scanf() deja de leer la entrada cuando llega a un espacio.
Para leer un string con espacios, utilice la función gets(). Lee la entrada hasta que se alcanza una nueva
línea de terminación (se pulsa la tecla Enter).
Por ejemplo:
 */
#include <stdio.h>

int main() {
    char full_name[50];
    printf("Enter your full name: ");
    gets(full_name);
    
    printf("\nHi, %s.", full_name);
    
    return 0;
}
/*
Una alternativa más segura a gets() es fgets(), que lee hasta un Numero especificado de caracteres. 
Este enfoque ayuda a prevenir un desbordamiento del búfer, que ocurre cuando la matriz de string no es lo suficientemente grande para el texto escrito.
Por ejemplo:
 */
#include <stdio.h>

int main() {
    char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name, 50, stdin);

    printf("\nHi, %s", full_name);
    
    return 0;
}
/*
Los argumentos de fgets() son el nombre de la string, el Numero de caracteres a leer, y un puntero de donde se quiere leer la string.
stdin significa leer de la entrada estándar, que es el teclado.
Otra diferencia entre gets y fgets es que el carácter de nueva línea es almacenado por fgets.

!fgets() lee sólo n-1 caracteres de stdin porque debe haber espacio para '\0'.
 */