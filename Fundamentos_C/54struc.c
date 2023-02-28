/* 
Estructuras


Una estructura es un tipo de datos definido por el usuario que agrupa variables relacionadas de diferentes tipos de datos.

Una declaración de estructura incluye la palabra clave struct, una etiqueta de estructura para referenciar la estructura,
y llaves { } con una lista de declaraciones de variables llamadas miembros.
Por ejemplo:

struct course {
  int id;
  char title[40];
  float hours; 

Esta sentencia struct define un nuevo tipo de datos llamado course que tiene tres miembros.
Los miembros de la estructura pueden ser de cualquier tipo de datos, incluyendo tipos básicos,
strings, arrays, punteros e incluso otras estructuras, como aprenderá en una lección posterior.
}; 
No olvide poner un punto y coma después de la declaración de la estructura.
Una estructura también se denomina tipo de datos compuesto o agregado. 
Algunos lenguajes se refieren a las estructuras como registros.
*/