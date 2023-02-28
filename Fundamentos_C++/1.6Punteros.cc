/*
Desreferenciación


El operador de desreferencia (*) es básicamente un alias para la variable a la que apunta el puntero.
Por ejemplo:
int x = 5;
int *p = &x;

x = x + 4;
x = *p + 4;
*p = *p + 4;

Las tres sentencias anteriores son equivalentes y devuelven el mismo resultado. Podemos acceder a la variable desreferenciando el puntero de la variable.

Como p apunta a la variable x, desreferenciar el puntero (*p) es representar exactamente lo mismo que la variable x.!!

 */