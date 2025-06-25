#include <stdio.h>

#define SIZE 10

int queue[SIZE];
int rear = -1;
int front = 0;

int enqueue(int data)
{
    if (rear >= SIZE - 1) {
        printf("\nQueue Overflow! Cannot enqueue %d\n", data);
        return -1;
    }
    rear++;
    queue[rear] = data;
    return rear;
}

int dequeue()
{
    if (front > rear) {
        printf("\nQueue Underflow! Cannot dequeue\n");
        return -1;
    }
    printf("\nDequeued element: %d\n", queue[front]);
    front++;
    return front;
}

void display()
{
    if (front > rear) {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nElements in the queue:\n");
    for (int i = front; i <= rear; i++) {
        printf(" %d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(24);
    enqueue(44);
    enqueue(67);
    display();

    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    display();
    dequeue();
    int n;
    printf("Enter the data to enqueue:");
    for (int i = 0; i < SIZE-2; i++) {
        scanf ("%d",&n);
        enqueue(n);
    }
    display();

    return 0;
}
