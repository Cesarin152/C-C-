/*
Manejo de excepciones


El uso de técnicas de gestión de errores es fundamental para las buenas prácticas de programación. 
Incluso las habilidades de codificación más sólidas pueden no evitar que un programa se bloquee si se olvida de incluir el manejo de excepciones.

Una excepción es cualquier situación que hace que su programa detenga la ejecución normal. 
El manejo de excepciones, también llamado manejo de errores, es un enfoque para procesar los errores en tiempo de ejecución.

C no soporta explícitamente el manejo de excepciones, pero hay formas de manejar los errores:
- Escribir código para prevenir los errores en primer lugar. No puedes controlar la entrada del 
usuario, pero puedes comprobar que el usuario ha introducido una entrada válida. Cuando realice 
una división, tome el paso extra para asegurarse de que la división por 0 no ocurrirá.
- Utilice la sentencia exit para finalizar la ejecución del programa de forma elegante. 
Es posible que no pueda controlar si un archivo está disponible para la lectura, pero no necesita permitir que el problema bloquee su programa.

Utilice errno, perror() y strerror() para identificar los errores a través de los códigos de error.
 */

/*
El comando exit


El comando exit detiene inmediatamente la ejecución de un programa y envía un código de salida al proceso que lo llama. 
Por ejemplo, si un programa es llamado por otro programa, entonces el programa que llama puede necesitar saber el estado de salida.

El uso de exit para evitar que un programa se caiga es una buena práctica porque cierra cualquier conexión de archivos y procesos abiertos.

Puede devolver cualquier valor a través de una sentencia exit, pero 0 para el éxito y -1 para el fracaso son típicos. Las macros predefinidas 
en stdlib.h EXIT_SUCCESS y EXIT_FAILURE también se utilizan habitualmente.
Por ejemplo:
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 10;
    int y = 0;

    if (y != 0)
        printf("x / y = %d", x / y);
    else
    {
        printf("Divisor is 0. Program exiting.");
        exit(EXIT_FAILURE);
    }

    return 0;
}