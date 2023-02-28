/*
Funciones de gestión de la memoria


La biblioteca stdlib.h incluye funciones de gestión de memoria.
La sentencia #include <stdlib.h> en la parte superior de su programa le da acceso a lo siguiente:

malloc(bytes) Devuelve un puntero a un bloque contiguo de memoria de tamaño bytes.

calloc(num_items, item_size) Devuelve un puntero a un bloque contiguo de memoria que tiene num_items items,
cada uno de tamaño item_size bytes. Normalmente se utiliza para matrices, estructuras y otros tipos de datos derivados. 
La memoria asignada se inicializa a 0.

realloc(ptr, bytes) Redimensiona la memoria apuntada por ptr al tamaño bytes. La memoria recién asignada no se inicializa.

free(ptr) Libera el bloque de memoria apuntado por ptr.

Cuando ya no necesite un bloque de memoria asignado, utilice la función free() para que el bloque esté disponible para ser asignado de nuevo.
 */