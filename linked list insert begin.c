#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void insertatbeginning(int data)
{
    struct node *lk = (struct node*) malloc(sizeof(struct node));
    lk->data=data;
    lk->next=head;
    head=lk;
}
void printList(){
    struct node *p=head;
    printf("\n[");
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("]");
}

int main() {
    int k=0;
    insertatbeginning(12);
    insertatbeginning(22);
    printf("Linked List:");
    printList();

    return 0;
}
