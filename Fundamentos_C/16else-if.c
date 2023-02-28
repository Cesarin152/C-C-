/*
La sentencia if-else if


Cuando se necesita una decisión entre tres o más acciones, se puede utilizar la sentencia if-else if.
Puede haber varias cláusulas else if y la última cláusula else es opcional.
Por ejemplo:


  */

#include <stdio.h>
#include <conio.h>
int main() {
   int score = 89;

   if (score >= 90)
       printf("%s", "Top 10% \n");
   else if (score >= 80)
       printf("%s", "Top 20% \n");
   else if (score > 75)
       printf("%s", "You passed.\n");
   else
       printf("%s", "You did not pass.\n");
   getch();
   return 0;
}

/*
Considere cuidadosamente la lógica involucrada al desarrollar una sentencia if-else if.
 El flujo del programa se bifurca a las sentencias asociadas con la primera expresión
 verdadera y ninguna de las expresiones restantes será probada.
Aunque las sangrías no afectarán al código compilado,
la lógica del if-else if será más fácil de entender por un lector cuando las cláusulas else estén alineadas.
!Cuando sea posible, se prefiere una sentencia if-else if en lugar de sentencias if anidadas para mayor claridad.
 */