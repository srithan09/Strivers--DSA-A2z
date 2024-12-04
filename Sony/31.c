#include <stdio.h>

#include <stdlib.h>

void main(void)

{

int x = 16;

char y[10];

itoa (--x, y, x);

printf ("%d %s", x, y);

}