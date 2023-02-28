/*
Las funciones sprintf y sscanf


Con la función sprintf() se puede crear un string formateado.
Esto es útil para construir un string a partir de otros tipos de datos.

Por ejemplo:
 */
#include <stdio.h>
int main()
{
    char info[100];
    char dept[] = "HR";
    int emp = 75;
    sprintf(info, "The %s dept has %d employees.", dept, emp);
    printf("%s\n", info);

    return 0;
}
/*
Otra función útil es sscanf() para escanear una cadena en busca de valores. 
La función lee valores de una string y los almacena en las direcciones de las variables correspondientes.
Por ejemplo:
 */
#include <stdio.h>
int main()
{
    char info[] = "Snoqualmie WA 13190";
    char city[50];
    char state[50];
    int population;
    sscanf(info, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s.", population, city, state);

    return 0;
}