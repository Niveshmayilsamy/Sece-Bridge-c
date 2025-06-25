#include <stdio.h>
int queue[10];
int rear=-1;
int front=0;

int enqueue(int data)
{
    rear++;
    queue[rear]=data;
    return rear;
}
int dequeue()
{
    front++;
    return front;
}

int display()
{
    printf("\n Element in the queue:\n");
    for(int i=front;i<=rear;i++)
    {
        printf(" %d ", queue[i]);
    }
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
    

    return 0;
}
