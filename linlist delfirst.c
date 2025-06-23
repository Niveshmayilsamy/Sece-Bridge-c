#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void deleteAtFirst() {
    if (head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}

void printList() {
    struct node *p = head;
    printf("\n[");
    while (p != NULL) {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("]\n");
}

void insertAtEnd(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

int main() {
   
    insertAtEnd(12);
    insertAtEnd(22);
    insertAtEnd(32);
    insertAtEnd(42);

    printf("Original Linked List:");
    printList();
    deleteAtFirst();
    printf("After deleting first node:");
    printList();

    deleteAtFirst();
    printf("After deleting first node again:");
    printList();

    return 0;
}
