/*
Encapsulación


Parte del significado de la palabra encapsulación es la idea de "rodear" una entidad, 
no sólo para mantener unido lo que hay dentro, sino también para protegerlo.
En la orientación a objetos, la encapsulación significa más que simplemente combinar 
atributos y comportamiento dentro de una clase; también significa restringir el acceso al funcionamiento interno de esa clase.

El principio clave aquí es que un objeto sólo revela lo que los otros componentes de la 
aplicación requieren para ejecutar efectivamente la aplicación. Todo lo demás se mantiene fuera de la vista.

Esto se llama ocultación de datos.

Encapsulación


Por ejemplo, si tomamos nuestra clase BankAccount, no queremos que alguna otra parte de nuestro programa 
llegue y cambie el saldo de algún objeto, sin pasar por los comportamientos deposit() o withdraw().
Debemos ocultar ese atributo, controlar el acceso a él, para que sea accesible sólo por el propio objeto.
De esta forma, el saldo no puede ser modificado directamente desde fuera del objeto y sólo es accesible mediante sus métodos.
Esto también se conoce como "black boxing", que se refiere a cerrar las zonas de trabajo internas del objeto, excepto de las piezas que queremos hacer públicas.
Esto nos permite cambiar los atributos y la implementación de los métodos sin alterar el programa en general. Por ejemplo, podemos volver más tarde y cambiar el tipo de datos del atributo balance.
En resumen los beneficios de la encapsulación son:
- Controlar la forma en que se accede a los datos o se modifican.
- El código es más flexible y fácil de cambiar con nuevos requisitos.
- Cambiar una parte del código sin afectar a otra parte del código.
 */