/*
Constantes



Una constante almacena un valor que no puede ser modificado desde su asignación inicial.
Al utilizar constantes con nombres significativos, el código es más fácil de leer y entender.
Para distinguir las constantes de las variables, una práctica común es utilizar identificadores en mayúsculas.

Una forma de definir una constante es utilizar la palabra clave const en la declaración de una variable:
*/
#include <stdio.h>

int main() {
    const double PI = 3.14;
    printf("%f", PI);
    
    return 0;
}
/* El valor de PI no puede ser cambiado durante la ejecución del programa.
Por ejemplo, otra sentencia de asignación, como PI = 3.141 generará un error.
Las constantes deben ser inicializadas con un valor cuando se declaran. */

/*Otra forma de definir una constante es con la directiva del preprocesador #define.
La directiva #define utiliza macros para definir valores constantes.
Por ejemplo: */

/* 
#include <stdio.h>

#define PI 3.14

int main() {
    printf("%f", PI);
    return 0;
}
*/

/*
Antes de la compilación, el preprocesador sustituye cada identificador de macro en 
el código por su valor correspondiente de la directiva. En este caso, cada ocurrencia de PI es reemplazada por 3.14.
El código final enviado al compilador ya tendrá los valores constantes en su lugar.

La diferencia entre const y #define es que la primera utiliza memoria para el almacenamiento y la segunda no.
!NO ponga un carácter de punto y coma al final de las declaraciones #define. Esto es un error común.
Aprenderemos más sobre las directivas del preprocesador en los próximos módulos. 
*/