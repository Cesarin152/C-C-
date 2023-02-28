/*
Estructuras con estructuras

Los miembros de una estructura también pueden ser estructuras.
Por ejemplo, considere las siguientes declaraciones:
 */
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point;

typedef struct
{
    float radius;
    point center;
} circle;

int main()
{
    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.center = p;

    printf("Circle radius is %.2f, center is at (%d, %d)", c.radius, c.center.x, c.center.y);

    return 0;
}
/*
Las llaves anidadas se utilizan para inicializar miembros que son structs. 
El operador punto se utiliza dos veces para acceder a los miembros de los miembros, 
como en las declaraciones:
 */
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point;

typedef struct
{
    float radius;
    point center;
} circle;

int main()
{
    circle c = {4.5, {1, 3}};
    printf("%3.1f x=%d,y=%d", c.radius, c.center.x, c.center.y);
    /* 4.5  1,3 */

    return 0;
}