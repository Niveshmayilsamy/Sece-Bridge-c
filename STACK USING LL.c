#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *top;  

struct node *stackTop = NULL; 

void push(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->top = stackTop;
    stackTop = newNode;
}

// Pop operation (remove from beginning)
int pop() {
    if (stackTop == NULL) {
        printf("Stack Underflow\n");
        return -1; 
    }
    struct node *temp = stackTop;
    int poppedData = temp->data;
    stackTop = stackTop->top;
    free(temp);
    return poppedData;
}

// Display stack
void printStack() {
    struct node *p = stackTop;
    printf("\nStack (top to bottom): [");
    while (p != NULL) {
        printf(" %d ", p->data);
        p = p->top;
    }
    printf("]\n");
}

int main() {
    push(12);
    push(22);
    printf("Stack after pushes:");
    printStack();

    int popped = pop();
    printf("Popped: %d\n", popped);
    printf("Stack after pop:");
    printStack();

    return 0;
}
