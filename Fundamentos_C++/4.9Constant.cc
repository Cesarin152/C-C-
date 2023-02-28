/*
Constantes


Una constante es una expresión con un valor fijo. No puede cambiarse mientras el programa se está ejecutando.
Utilice la palabra clave const para definir una variable constante.
const int x = 42;

Todas las variables constantes deben ser inicializadas en el momento de su creación.

Objetos constantes


Al igual que con los tipos de datos incorporados, podemos hacer constantes los objetos de clase utilizando la palabra clave const.
const MyClass obj;

Todas las variables const deben ser inicializadas cuando se crean. En el caso de las clases, esta inicialización se realiza mediante constructores. 
Si una clase no se inicializa mediante un constructor parametrizado, debe proporcionarse un constructor público 
por defecto - si no se proporciona un constructor público por defecto, se producirá un error de compilación.

Una vez que un objeto de clase const ha sido inicializado a través del constructor, no se pueden modificar las variables miembro del objeto. 
Esto incluye tanto la realización directa de cambios en las variables miembro públicas como la llamada a las funciones miembro que establecen el valor de las variables miembro.
Cuando has utilizado const para declarar un objeto, no puedes cambiar sus datos miembros durante la vida del objeto.


 */