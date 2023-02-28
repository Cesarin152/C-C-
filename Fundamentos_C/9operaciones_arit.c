/*
Operadores aritméticos


C admite los operadores aritméticos + (suma), - (resta), * (multiplicación), / (división) y % (división de módulo).
Los operadores se utilizan a menudo para formar una expresión numérica como 10 + 5, que en este caso contiene dos operandos y el operador de suma.
Las expresiones numéricas se utilizan a menudo en las sentencias de asignación.
Por ejemplo:
 */
/*
#include <stdio.h>

int main() {
    int longitud = 10;
    int anchura = 5;
    int área;

    área = longitud * anchura;
    printf("%d \n", área);//50 

    return 0;
}
*/
/*
División

C tiene dos operadores de división: / y %.
El operador de división / se comporta de forma diferente dependiendo de los tipos de datos de los operandos.
Cuando ambos operandos son de tipo int, la división entera, también llamada división truncada, elimina cualquier
resto para dar como resultado un número entero. Cuando uno o ambos operandos son números reales (float o double), 
el resultado es un número real.El operador % devuelve sólo el resto de la división entera. Es útil para muchos algoritmos, 
incluyendo la recuperación de dígitos de un Numero. La división modular no puede realizarse en flotantes o dobles.
El siguiente ejemplo demuestra la división:
 */
#include <stdio.h>

int main() {
    int i1 = 10;
    int i2 = 3;
    int cociente, resto;
    float f1 = 4.2;
    float f2 = 2.5;
    float resultado;

    cociente = i1 / i2; // 3
    resto = i1 % i2; // 1
    resultado = f1 / f2; // 1.68

    printf("%d \n", cociente);
    printf("%d \n", resto);
    printf("%.2f \n", resultado);

    return 0;
}
/*
C puede no evaluar una expresión numérica como se desea cuando la propiedad asociativa permite cualquier orden. 
Por ejemplo, x*y*z puede evaluarse como (x * y) * z o como x * (y * z). Si el orden es importante, divida la expresión 
en sentencias separadas.
*/