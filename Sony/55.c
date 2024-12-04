#include<stdio.h>

#include<malloc.h>

#include<stdarg.h>

void fun(int,...);

struct node
{
int data;
struct node *link;

};

struct node *s, *p;
int dis(struct node *p);
void add(int n);

int main()
{
int nos = 0;
p = NULL;
s=p;
fun(5, 11, 22, 33, 44, 55);
nos = dis(s->link);
printf ("%d", nos );
}

void fun(int n,...)
{

int i = 0;

va_list s;

va_start(s, n);

for (i=0; i <= 4; i++)
{
add(va_arg(s,int));
}

}

void add(int n)
{
struct node *r, *t;

if (s == NULL)
{

r = (struct node *)malloc(sizeof(struct node *));

r->data = n;

r->link = NULL;

s=r;

}
else
{
t=s;

r = (struct node *)malloc(sizeof (struct node*));

r->data = n;
r->link = NULL;

while (t -> link != NULL)
{
t=t->link;
}
t->link = r;

}

}
int dis(struct node *q)
{
int c = 0;
while (q -> link != NULL)
{
c++;
q = q ->link;
}
return (c);
}