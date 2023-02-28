/*
Parámetros de la función


Los parámetros de una función se utilizan para recibir los valores requeridos por la función.
Los valores se pasan a estos parámetros como argumentos a través de la llamada a la función.
Por defecto, los argumentos se pasan por valor, lo que significa que se da una copia de los 
datos a los parámetros de la función llamada. La variable real no se pasa a la función, por lo 
que no cambiará.Los argumentos que se pasan a una función se corresponden con los parámetros
por posición. Por lo tanto, el primer argumento se pasa al primer parámetro, el segundo al 
segundo parámetro, y así sucesivamente. El siguiente programa demuestra los parámetros pasados por valor:
 */
#include <stdio.h>

int sum_up(int P, int J);

int main()
{
    int x, y, result;

    x = 3;
    y = 12;
    result = sum_up(x, y);
    printf("%d + %d = %d", x, y, result);

    return 0;
}

int sum_up(int P, int J)
{
    P += J;//P=P+J
    return (P);
}
/*
La salida del programa es: 3 + 12 = 15
Los valores de x e y fueron pasados a sum_up. Observe que aunque el valor del
parámetro x se cambió en sum_up, el valor del argumento x en main() no se cambió
porque sólo se pasó su valor al parámetro x.Los parámetros en una declaración de 
función son los parámetros formales. Los valores pasados a estos parámetros son los 
argumentos, a veces llamados parámetros reales.
 */