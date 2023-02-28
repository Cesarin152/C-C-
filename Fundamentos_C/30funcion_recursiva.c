/* 
Funciones recursivas


Un algoritmo para resolver un problema puede implementarse mejor utilizando un proceso llamado recursión.
 Consideremos el factorial de un Numero, que comúnmente se escribe como 5! = 5 * 4 * 3 * 2 * 1.
Este cálculo también puede considerarse como el cálculo repetido de num * (num -1) hasta que num sea 1.

Una función recursiva es aquella que se llama a sí misma e incluye un caso base, o condición de salida, 
para finalizar las llamadas recursivas. En el caso de calcular un factorial, el caso base es num igual a 1.
Por ejemplo:
 */
#include <stdio.h>

//function declaration
int factorial(int num);

int main() {    
    int x = 3;

    printf("The factorial of %d is %d\n", x, factorial(x));
 
    return 0;
}

//function definition
int factorial(int num) {
  
    if (num == 1)  /* base case */
        return (1);
    else
        return (num * factorial(num - 1));
} 
/*
La salida del programa es: El factorial de 5 es 120

La recursión funciona "apilando" llamadas hasta que se ejecuta el caso base. 
En ese momento, las llamadas se completan de la más reciente a la más antigua. 
La pila de llamadas al factorial puede pensarse como:

2*factorial(1)
3*factorial(2)
4*factorial(3)
5*factorial(4)

Cuando se alcanza el caso base, el valor return 1 provoca la finalización de las llamadas apiladas. 
Los valores de retorno de más reciente a más antiguo crean los siguientes cálculos,
 con el cálculo final (5 * 24) que se devuelve a la función de llamada main():
 
2 * 1
3 * 2
4 * 6
5 * 24
 */