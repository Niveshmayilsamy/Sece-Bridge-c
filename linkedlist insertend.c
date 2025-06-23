#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

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


void printList() {
    struct node *p = head;
    printf("\n[");
    while (p != NULL) {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("]\n");
}

int main() {
    insertAtEnd(12);
    insertAtEnd(22);
    insertAtEnd(32);
    printf("Linked List:");
    printList();

    return 0;
}


