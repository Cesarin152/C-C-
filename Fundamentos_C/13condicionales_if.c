/* 
Condicionales
Los condicionales se utilizan para realizar diferentes cálculos o 
acciones dependiendo de si una condición se evalúa como verdadera o falsa.

La sentencia if

La sentencia if se denomina estructura de control condicional porque ejecuta sentencias 
cuando una expresión es verdadera.Por esta razón, el if también se conoce como una 
estructura de decisión. Tiene la forma:

if (expresión)
  declaraciones

La expresión se evalúa como verdadera o falsa, y las declaraciones pueden ser una sola declaración 
o un bloque de código encerrado entre llaves { }.
Por ejemplo:

 */
#include <stdio.h>

int main() {
    int puntaje = 89;
  
    if ( puntaje > 75)
        printf("Has superado.\n");    
    return 0;
}

/*
En el código anterior comprobamos si la variable de puntuación es mayor que 75, 
e imprimimos un mensaje si la condición es verdadera.

 */