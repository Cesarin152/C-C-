/*
Memoria estática y dinámica


Para tener éxito como programador de C++, es esencial entender bien cómo funciona la memoria dinámica.
En un programa C++, la memoria se divide en dos partes:
La Pila: Todas las variables locales ocupan la memoria de la pila.
La memoria de la pila (heap): La memoria del programa no utilizada que puede ser usada cuando el programa se ejecuta para asignar dinámicamente la memoria.

Muchas veces, usted no sabe de antemano cuánta memoria necesitará para almacenar una información 
particular en una variable definida y el tamaño de la memoria requerida puede determinarse en tiempo de ejecución.
Se puede asignar memoria en tiempo de ejecución dentro del heap para la variable de un tipo determinado 
utilizando el operador new, que devuelve la dirección del espacio asignado. "new int;"

Esto asigna el tamaño de memoria necesario para almacenar un entero en el heap, y devuelve esa dirección.!!

 */
/*
Memoria dinámica


La dirección asignada puede ser almacenada en un puntero, que luego puede ser desreferenciado para acceder a la variable.
Ejemplo:

int *p = new int;
*p = 5;

Hemos asignado dinámicamente memoria para un entero, y le hemos asignado un valor de 5.

El puntero p se almacena en la pila como una variable local, y tiene como valor la 
dirección asignada del montón. El valor de 5 se almacena en esa dirección del montón.
 */