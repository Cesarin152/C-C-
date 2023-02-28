/*
Matrices en C


Un array es una estructura de datos que almacena una colección de valores relacionados que son todos del mismo tipo.
Las matrices son útiles porque pueden representar datos relacionados con un nombre descriptivo en lugar de utilizar 
variables separadas que deben tener un nombre único.Por ejemplo, el array puntuaciones_de_prueba[25] puede contener 
25 puntuaciones de prueba.Una declaración de matriz incluye el tipo de los valores que almacena, un identificador
 y corchetes [ ] con un Numero que indica el tamaño de la matriz.
Por ejemplo:
int test_scores[25];  An array size 25 

También se puede inicializar un array cuando se declara, como en la siguiente sentencia:
float precios[5] = {3,2, 6,55, 10,49, 1,25, 0,99};

Observe que los valores iniciales se separan con comas y se colocan dentro de llaves { }.
Un array puede ser parcialmente inicializado, como en
float precios[5] = {3.2, 6.55}; 
Los valores que faltan se ponen a 0.

Un array se almacena en posiciones de memoria contiguas y no puede cambiar de tamaño después de ser declarado.

 */