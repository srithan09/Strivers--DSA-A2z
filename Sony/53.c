#include <stdio.h>
#include <stdlib.h>
void main()

{

int *p;

p = malloc(sizeof(int));

*p = 10;

free (p);

printf ("%d", *p);
}