/*
La función calloc


La función calloc() asigna memoria basándose en el tamaño de un elemento específico, como una estructura.
El programa siguiente utiliza calloc para asignar memoria a una estructura y malloc para asignar memoria a la cadena dentro de la estructura:
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int num;
    char *info;
} record;

int main()
{
    record *recs;
    int num_recs = 2;
    int k;
    char str[] = "This is information";
    printf(" String Size :%ld\n",sizeof(str));
    recs = calloc(num_recs, sizeof(record));
    if (recs != NULL)
    {
        for (k = 0; k < num_recs; k++)
        {
            //recs[k].num=k;igual a lo de debajo
            (recs + k)->num = k;
            //recs[k].info=malloc(sizeof(str));igual a lo de debajo
            (recs + k)->info = malloc(sizeof(str));
            
            strcpy((recs + k)->info, str);
        }
    }

    for (k = 0; k < num_recs; k++)
    {
        //printf(" Valor en posicion %d array :%d\n",k,recs[k].num); Igual a lo de debajo
        printf("%d\t%s\n", (recs + k)->num, (recs + k)->info);
    }

    return 0;
}