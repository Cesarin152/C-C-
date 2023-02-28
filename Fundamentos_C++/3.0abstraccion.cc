/*
Abstracción


La abstracción de datos es el concepto de proporcionar sólo la información esencial al mundo exterior. 
Es un proceso de representación de las características esenciales sin incluir los detalles de implementación.

Un buen ejemplo del mundo real es un libro: Cuando oyes el término libro, no conoces los detalles exactos, 
es decir, el número de páginas, el color, el tamaño, pero entiendes la idea de un libro: la abstracción del libro.
El concepto de abstracción consiste en centrarse en las cualidades esenciales, más que en las características 
específicas de un ejemplo concreto.

Abstracción


Abstracción significa que podemos tener una idea o un concepto que está completamente separado de cualquier instancia específica.
Es uno de los bloques de construcción fundamentales de la programación orientada a objetos.

Por ejemplo, cuando usas cout, en realidad estás usando el objeto cout de la clase ostream. Esto transmite los datos para dar lugar a la salida estándar.
cout << "Hello!" << endl;

En este ejemplo, no es necesario entender cómo cout mostrará el texto en la pantalla del usuario. 
Lo único que necesitas saber para poder usarlo es la interfaz pública.

Abstracción


La abstracción nos permite escribir una sola clase de cuenta bancaria, y 
luego crear diferentes objetos basados en la clase, para cuentas bancarias individuales, 
en lugar de crear una clase separada para cada cuenta bancaria.

BankAccount "Esta es la clase"
accountNumber "Atributos"
DateCreate "Atributos"
checking()"Accion o metodo"

John's Account
A6595
$500
4/3/2016
checking

David's Account
A6596
$800
10/8/2015
checking



La abstracción actúa como base para los demás fundamentos de la orientación a objetos, 
como la herencia y el polimorfismo. Estos serán discutidos más adelante en el curso.
 */