#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int size;
    int top;
    int *arr;
} *stack;

stack create_stack(int size) {
    stack s;
    s = (stack)malloc(sizeof(struct Stack));
    s->size = size;
    s->top = -1;
    s->arr = (int *)malloc(size * sizeof(int));
    return s;
}

void push(stack st, int data) {
    if (st->top == st->size - 1) {
        printf("The stack is full\n");
        return; // Return early to avoid incrementing top if full
    }
    st->top++;
    st->arr[st->top] = data;
}

int pop(stack st) {
    int x = -1;
    if (st->top == -1) {
        printf("Stack is underflow\n");
    } else {
        x = st->arr[st->top];
        st->top--;
    }
    return x;
}

int top(stack st) {
    if (st->top == -1) {
        printf("Stack is underflow\n");
        return -1; 
    }
    return st->arr[st->top];
}

int isFull(stack st) {
    return st->top == st->size - 1;
}

int isEmpty(stack st) {
    return st->top == -1;
}

int peek(stack st, int pos) {
    int x = st->top - pos + 1;
    if (x < 0 || x > st->top) {
        printf("Invalid position\n");
        return -1; 
    }
    return st->arr[x];
}

int main() {
    stack s1 = create_stack(5);

    // Pushing elements onto the stack
    push(s1, 10);
    push(s1, 20);
    push(s1, 30);
    push(s1, 40);
    push(s1, 50);
    
    // Try to push another element to check for overflow
    push(s1, 60);

    // Display the top element
    printf("Top element is: %d\n", top(s1));

    // Popping elements from the stack
    printf("Popped element: %d\n", pop(s1));
    printf("Popped element: %d\n", pop(s1));

    // Display the top element after popping
    printf("Top element is now: %d\n", top(s1));

    // Check if the stack is empty
    if (isEmpty(s1)) {
        printf("The stack is empty\n");
    } else {
        printf("The stack is not empty\n");
    }

    // Clean up memory
    free(s1->arr);
    free(s1);

    return 0;
}