/*
Uso de la memoria

C está diseñado para ser un lenguaje de bajo nivel que puede acceder 
fácilmente a las ubicaciones de memoria y realizar operaciones relacionadas con la memoria.
Por ejemplo, la función scanf() coloca el valor introducido por el usuario en la ubicación, 
o dirección, de la variable. Esto se consigue utilizando el símbolo &.

Por ejemplo:
 */
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");

    scanf("%d", &num);

    printf("%d", num);
    
	return 0;
}
/*
&num es la dirección de la variable num.

Una dirección de memoria se da como un Numero hexadecimal. Hexadecimal, o hex, es un sistema 
numérico de base-16 que utiliza los dígitos del 0 al 9 y las letras de la A a la F (16 caracteres)
para representar un grupo de cuatro dígitos binarios que pueden tener un valor del 0 al 15.
Es mucho más fácil leer un Numero hexadecimal de 8 caracteres para 32 bits de memoria que tratar de descifrar 32 1s y 0s en binario.
El siguiente programa muestra las direcciones de memoria de las variables i y k
 */
#include <stdio.h>

void test(int k);

int main() {
    int i = 0;
    
    printf("The address of i is %x\n", &i);
    test(i);
    printf("The address of i is %x\n", &i);
    test(i);

    return 0;
}

void test(int k) {
    printf("The address of k is %x\n", &k);
} /*
La dirección de una variable es la misma desde que se declara hasta el final de su ámbito.
*/