#include <stdio.h>

#include <string.h>

void main()

{
char str[] = "Presence of mind";
int i;

for (i = 0; i <= 3; i++)
    printf ("%c",*(str + i));

for(i=0; i<=3; i++)
   printf ("%c", *(str + 8 + i));
printf("\n");
}