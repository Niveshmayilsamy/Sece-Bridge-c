#include <stdio.h>

int MAXSIZE = 3;
int stack[3];
int top = -1;

void push(int data) {
    if (top != MAXSIZE - 1) {
        top++;
        stack[top] = data;
    } else {
        printf("\tStack Overflow!\n");
    }
}

int pop() {
    if (top != -1) {
        int popped = stack[top];
        top--;
        return popped;
    } else {
        printf("\tStack Underflow!\n");
        return -1;
    }
}

int main() {
    int i;

    push(41);
    push(42);
    push(43);
    push(44);  

    printf("Stack Elements: ");
    for (i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    pop();
    pop();
    pop();
    pop();  

    return 0;
}
