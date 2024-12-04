#include <stdio.h>

#include <malloc.h>

struct node
{
int data;
struct node *link;
};
struct node *p;

void main(){
int n = 100;
p = NULL;
add (n);
}

add (int n){
    struct node *r;
r = (struct node *) malloc(sizeof(struct node));
r->data = n;
r->link = p;
printf ("%d %d", r -> data, r -> link);
}


