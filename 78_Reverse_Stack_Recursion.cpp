#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE-1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Error: Stack is full.\n");
        exit(1);
    }
    s->items[++s->top] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Error: Stack is empty.\n");
        exit(1);
    }
    return s->items[s->top--];
}

void insertAtBottom(Stack *s, int value) {
    if (isEmpty(s)) {
        push(s, value);
    } else {
        int temp = pop(s);
        insertAtBottom(s, value);
        push(s, temp);
    }
}

void reverse(Stack *s) {
    if (!isEmpty(s)) {
        int temp = pop(s);
        reverse(s);
        insertAtBottom(s, temp);
    }
}

void print(Stack *s) {
    printf("Stack: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    initialize(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);

    printf("Before reversal:\n");
    print(&s);

    reverse(&s);

    printf("After reversal:\n");
    print(&s);

    return 0;
}

