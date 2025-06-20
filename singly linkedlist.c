#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};

int main() {
    struct node *new_node,*head,*temp;
    head=0;
    int x;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Emter the data:\t");
    scanf("%d",&x);
    new_node->data=x;
    new_node->next=0;
    head=new_node;
    return 0;
}
