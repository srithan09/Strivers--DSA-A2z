#include <stdio.h>

#include <stdlib.h>

#include <string.h>

void main()
{
void fun (void);
void (*ptr) (void) = fun ;
printf ("%u", fun);
printf ("%u", ptr);
}

void fun (void)
{
printf ("See my address");
}