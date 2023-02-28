/*
Funciones que devuelven una matriz


Al igual que se puede pasar un puntero a un array a una función, se puede devolver un puntero a un array, como en el siguiente programa:
 */
#include <stdio.h>

int *get_evens();

int main()
{
  int *a;
  int k;

  a = get_evens(); /* get first 5 even numbers */
  for (k = 0; k < 5; k++)
    printf("%d\n", a[k]);

  return 0;
}

int *get_evens()
{
  static int nums[5];
  int k;
  int even = 0;

  for (k = 0; k < 5; k++)
  {
    nums[k] = even += 2;
  }

  return (nums);
}
/*
Observe que se declara un puntero, no un array, para almacenar el valor devuelto por la función.
Observe también que cuando una variable local se pasa fuera de una función, debe declararla como estática en la función.

Ten en cuenta que a[k] es lo mismo que *(a + k).
 */